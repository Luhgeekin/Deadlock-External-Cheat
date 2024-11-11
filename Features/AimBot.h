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

		ImVec2 enemyPos = GetClosestEntityPos();

		if (enemyPos.x == 0 && enemyPos.y == 0) {
			return;
		}
		if (_settings.lineToTarget) {
			ImGui::GetBackgroundDrawList()->AddLine(
				screenCenter,
				enemyPos,
				ImGui::ColorConvertFloat4ToU32(_settings.fovColor),
				1
			);
		}

		if (!(GetKeyState(VK_LBUTTON) & 0x8000)) {
			return;
		}

		ImVec2 deltaMove = CalculateMouseMove(enemyPos);
		MoveMouse(deltaMove.x, deltaMove.y);
	}

	ImVec2 GetClosestEntityPos() {

		using PriorityPair = std::pair<int, EntityType>;

		std::priority_queue<PriorityPair, std::vector<PriorityPair>, std::greater<PriorityPair>> queue;

		for (const auto& elem : entitiesMap) {
			if (elem.second->isOn) {
				queue.push({ elem.second->priority, elem.first });
			}
		}

		ImVec2 closestPos{ 0, 0 };
		ImVec2 buf;

		while (!queue.empty()) {
			EntityType tempType = queue.top().second;
			queue.pop();
			
			for (const auto& ent : EntitySystem::get()[tempType]) {
				if (EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin).DistanceTo(ent->GetWorldPosition(BoneType::Origin)) > _settings.maxDistance) {
					continue;
				}

				if (!IsTargetInFront(CameraManager::get().viewDirection, EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin), ent->GetWorldPosition(BoneType::Origin))) {
					continue;
				}

				if (!GetAimPositionIfEligible(ent, entitiesMap[tempType]->lock, buf)) {
					continue;
				}

				closestPos = CompareAndGetClosestToCenter(closestPos, buf);
			}

			if (closestPos.x != 0 && closestPos.y != 0 && IsPointInCircle(closestPos)) {
				return closestPos;
			}
		}

		return { 0,0 };
	}

	bool GetAimPositionIfEligible(std::shared_ptr<Entity> ent, BoneType bone, ImVec2& buf) {
		if (!ent->IsEligible()) {
			return false;
		}

		if (!ent->GetScreenPosition(bone, buf)) {
			return false;
		}

		return true;
	}

	ImVec2 CompareAndGetClosestToCenter(const ImVec2& point1, const ImVec2& point2) {
		float dist1Squared = (point1.x - screenCenter.x) * (point1.x - screenCenter.x) +
			(point1.y - screenCenter.y) * (point1.y - screenCenter.y);

		float dist2Squared = (point2.x - screenCenter.x) * (point2.x - screenCenter.x) +
			(point2.y - screenCenter.y) * (point2.y - screenCenter.y);

		return (dist1Squared < dist2Squared) ? point1 : point2;
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
			directionToEnemy.y * viewDirection.y +
			directionToEnemy.z * viewDirection.z;

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


	float fovRatio = 1;
	ImVec2 screenCenter = ImVec2(CameraManager::get().resolution.width / 2, CameraManager::get().resolution.height / 2);
};