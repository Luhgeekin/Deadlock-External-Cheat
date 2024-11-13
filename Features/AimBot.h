#pragma once
#include"../imgui/imgui.h"
#include"../SDK/EntitySystem.h"
#include"../SDK/CameraManager.h"


#include"Cheat.h"
#include<queue>


class AimBot : public Cheat {
public:
	AimBot(const Config::AimSettings& settings) :
		_settings(settings),
		Cheat(settings)
	{
		entitiesMap[EntityType::PlayerEnt] = &settings.players;
		entitiesMap[EntityType::TrooperEnt] = &settings.troopers;
		entitiesMap[EntityType::OrbEnt] = &settings.orbs;
	}

	std::vector<EntityType> GetRelevantEntities() override {
		return {};
	}


private:
	void _Tick() override {
		float curGameFov = CameraManager::get().fov;

		if (curGameFov != 0) {
			fovRatio = STANDART_GAME_FOV / curGameFov;
		}

		if (_settings.fovCircle) {
			ImGui::GetBackgroundDrawList()->AddCircle(
				screenCenter,
				_settings.fov * fovRatio,
				ImGui::ColorConvertFloat4ToU32(_settings.fovColor),
				0,
				3
			);
		}

		ImVec2 aimPosition;
		if (!GetAimPosition(aimPosition)) {
			return;
		}

		if (_settings.lineToTarget) {
			ImGui::GetBackgroundDrawList()->AddLine(
				screenCenter,
				aimPosition,
				ImGui::ColorConvertFloat4ToU32(_settings.fovColor),
				1
			);
		}

		if (!(GetKeyState(_settings.key) & 0x8000)) {
			_currentTarget = std::nullopt;
			return;
		}

		ImVec2 deltaMove = CalculateMouseMove(aimPosition);
		MoveMouse(deltaMove.x, deltaMove.y);
	}

	bool GetAimPosition(ImVec2& buf) {
		if (_currentTarget != std::nullopt) {
			std::shared_ptr<Entity> target = EntitySystem::get().GetEntityByAddr(_currentTarget->addr);
			if (target != nullptr && 
				GetTargetBonePosition(target, entitiesMap[_currentTarget->type]->lock, buf) && IsPointInCircle(buf)) {
				return true;
			}
			else {
				_currentTarget = std::nullopt;
			}
		}

		if (!GetClosestEntityPos(buf)) {
			return false;
		}

		return true;
	}

	bool GetClosestEntityPos(ImVec2& buf) {

		using PriorityPair = std::pair<int, EntityType>;

		std::priority_queue<PriorityPair, std::vector<PriorityPair>, std::greater<PriorityPair>> queue;

		for (const auto& elem : entitiesMap) {
			if (elem.second->isOn) {
				queue.push({ elem.second->priority, elem.first });
			}
		}

		ImVec2 closestPos{ 0, 0 };
		ImVec2 currentPos;
		TargetInfo tempInfo;

		while (!queue.empty()) {
			EntityType entType = queue.top().second;
			queue.pop();
			
			for (const auto& ent : EntitySystem::get()[entType]) {
				if (!GetTargetBonePosition(ent, entitiesMap[entType]->lock, currentPos)) {
					continue;
				}

				if (IsPointCloserToCenter(closestPos, currentPos)) {
					closestPos = currentPos;
					tempInfo = { entType, ent->GetAddr() };
				}
			}
			if (closestPos.x != 0 && closestPos.y != 0 && IsPointInCircle(closestPos)) {
				if (_settings.rememberTarget) {
					_currentTarget = tempInfo;
				}
				buf = closestPos;
				return true;
			}
		}

		return false;
	}

	bool GetTargetBonePosition(std::shared_ptr<Entity> ent, BoneType bone, ImVec2& buf) {
		if (!ent->IsEligible()) {
			return false;
		}
		if (EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin).DistanceTo(ent->GetWorldPosition(BoneType::Origin)) > _settings.maxDistance) {
			return false;
		}
		if (!IsTargetInFront(CameraManager::get().viewDirection, EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin), ent->GetWorldPosition(BoneType::Origin))) {
			return false;
		}
		if (!ent->GetScreenPosition(bone, buf)) {
			return false;
		}

		return true;
	}

	bool IsPointCloserToCenter(const ImVec2& point1, const ImVec2& point2) {
		float dist1Squared = (point1.x - screenCenter.x) * (point1.x - screenCenter.x) +
			(point1.y - screenCenter.y) * (point1.y - screenCenter.y);

		float dist2Squared = (point2.x - screenCenter.x) * (point2.x - screenCenter.x) +
			(point2.y - screenCenter.y) * (point2.y - screenCenter.y);

		return dist1Squared > dist2Squared;
	}

	bool IsPointInCircle(const ImVec2& point) {
		float deltaX = point.x - screenCenter.x;
		float deltaY = point.y - screenCenter.y;

		float distanceSquared = pow(deltaX, 2) + pow(deltaY, 2);

		return distanceSquared <= pow(_settings.fov * fovRatio, 2);
	}

	bool IsTargetInFront(const Vec3& viewDirection, const Vec3& playerPos, const Vec3& enemyPos) {
		Vec3 directionToEnemy = enemyPos - playerPos;

		float dotProduct = 
			directionToEnemy.x * viewDirection.x +
			directionToEnemy.y * viewDirection.y -
			directionToEnemy.z * viewDirection.z;  // ??????

		if (dotProduct < 0) {
			return false;
		}

		return true;
	}

	ImVec2 CalculateMouseMove(const ImVec2& targetPos) {
		ImVec2 delta;
		delta.x = (targetPos.x - screenCenter.x) * _settings.smoothing / fovRatio;
		delta.y = (targetPos.y - screenCenter.y) * _settings.smoothing / fovRatio;
		return delta;
	}

	void MoveMouse(int deltaX, int deltaY) {
		INPUT input = { 0 };
		input.type = INPUT_MOUSE;
		input.mi.dx = static_cast<LONG>(deltaX);
		input.mi.dy = static_cast<LONG>(deltaY);
		input.mi.dwFlags = MOUSEEVENTF_MOVE;

		SendInput(1, &input, sizeof(INPUT));
	}


private:
	std::unordered_map<EntityType, const Config::AimSettings::PosGetterSettings*> entitiesMap;
	const Config::AimSettings& _settings;
	
	struct TargetInfo {
		EntityType type;
		uintptr_t addr;
	};
	std::optional<TargetInfo> _currentTarget;

	float fovRatio = 1;
	ImVec2 screenCenter = ImVec2(CameraManager::get().resolution.width / 2, CameraManager::get().resolution.height / 2);
};