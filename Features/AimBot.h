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

private:
	void _Tick() override {
		isActive = GetAsyncKeyState(_settings.key);
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
		ImVec2 predictedPos = { 0, 0 };
		if (!GetAimPosition(aimPosition, predictedPos)) {
			return;
		}

		bool isPredicted = predictedPos.x != 0 && predictedPos.y != 0;
		ImVec4 lineToTargetColor = isActive ? ImVec4(255, 0, 0, 255) : _settings.fovColor;

		if (_settings.lineToTarget) {
			if (!isPredicted) {
				ImGui::GetBackgroundDrawList()->AddLine(
					screenCenter,
					aimPosition,
					ImGui::ColorConvertFloat4ToU32(lineToTargetColor),
					1
				);
			}
			else {
				ImGui::GetBackgroundDrawList()->AddLine(
					aimPosition,
					predictedPos,
					ImGui::ColorConvertFloat4ToU32(_settings.fovColor),
					1
				);
				ImGui::GetBackgroundDrawList()->AddLine(
					screenCenter,
					predictedPos,
					ImGui::ColorConvertFloat4ToU32(lineToTargetColor),
					1
				);
				aimPosition = predictedPos;
			}
		}

		if (!isActive) {
			_currentTarget.reset();
			return;
		}

		ImVec2 deltaMove = CalculateMouseMove(aimPosition);
		MoveMouse(deltaMove.x, deltaMove.y);
	}

	bool GetAimPosition(ImVec2& buf, ImVec2& predict) {
		if (_currentTarget) {
			std::shared_ptr<Entity> target = EntitySystem::get().GetEntityByAddr(_currentTarget->addr, _currentTarget->type);

			BoneType bone = entitiesMap[_currentTarget->type]->lock;
			if (target != nullptr && GetTargetBonePosition(target, bone, buf)) {

				if (_settings.prediction) {
					UpdateTargetVelocity(target, *_currentTarget);
					Vec3 predictedPos = PredictWorldPosition(
						target->GetWorldPosition(BoneType::Origin) + Vec3(0, 0, _currentTarget->height),
						_currentTarget->velocity,
						EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin)
					);

					ImVec2 predictedScreenPos;
					if (CameraManager::get().WorldToScreen(predictedPos, predictedScreenPos)) {
						predict = predictedScreenPos;
					}
				}

				return true;
			}
			else {
				_currentTarget = std::nullopt;
			}
		}

		TargetInfo inf;
		if (!GetClosestEntityPos(buf, inf)) {
			return false;
		}

		if (isActive && _settings.rememberTarget) {
			_currentTarget = inf;
		}

		return true;
	}
	
	struct TargetInfo;
	void UpdateTargetVelocity(std::shared_ptr<Entity> ent, TargetInfo& info){
		if (!ent) {
			return;
		}
		
		constexpr static float fInterval = 0.1f;
		auto now = std::chrono::steady_clock::now();

		std::chrono::duration<double> elapsed = now - info.lastTime;
		
		if (elapsed > std::chrono::milliseconds(1000) * fInterval) {
			Vec3 currentPos = ent->GetWorldPosition(BoneType::Origin);
			Vec3 difference = currentPos - info.worldPosition;

			info.velocity = difference / elapsed.count();
			info.worldPosition = currentPos;
			info.lastTime = now;
		}

	}

	bool GetClosestEntityPos(ImVec2& buf, TargetInfo& tempInfo) {
		using PriorityPair = std::pair<int, EntityType>;

		std::priority_queue<PriorityPair, std::vector<PriorityPair>, std::greater<PriorityPair>> queue;
		for (const auto& elem : entitiesMap) {
			if (elem.second->isOn) {
				queue.push({ elem.second->priority, elem.first });
			}
		}

		ImVec2 closestPos{ 0, 0 };
		ImVec2 currentPos;
		
		while (!queue.empty()) {
			EntityType entType = queue.top().second;
			queue.pop();
			
			for (const auto& ent : EntitySystem::get()[entType]) {
				if (!GetTargetBonePosition(ent, entitiesMap[entType]->lock, currentPos)) {
					continue;
				}

				if (IsPointCloserToCenter(closestPos, currentPos)) {
					closestPos = currentPos;

					Vec3 worldPosOrigin = ent->GetWorldPosition(BoneType::Origin);
					Vec3 worldPos = ent->GetWorldPosition(entitiesMap[entType]->lock);
					float height = std::abs(worldPos.z - worldPosOrigin.z);
					tempInfo = {
						entType,
						ent->GetAddr(),
						ent->GetWorldPosition(BoneType::Origin),
						{0, 0, 0},
						std::chrono::steady_clock::now(),
						height
					};
					
				}
			}

			if (closestPos.x == 0 || closestPos.y == 0 || !IsPointInCircle(closestPos)) {
				continue;
			}

			if (_settings.isPriorityEnabled || queue.empty()) {
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
			directionToEnemy.z * viewDirection.z;

		if (dotProduct < 0) {
			return false;
		}

		return true;
	}

	Vec3 PredictWorldPosition(const Vec3& targetPosition, const Vec3& targetVelocity, const Vec3& localPlayerPosition, float bulletSpeed = 35000.f) {
		float distance = localPlayerPosition.DistanceTo(targetPosition);
		float time = distance / bulletSpeed;

		Vec3 velocityTime = targetVelocity * time;

		return targetPosition + velocityTime;
	}

	ImVec2 CalculateMouseMove(const ImVec2& targetPos) {
		ImVec2 delta;
		delta.x = (targetPos.x - screenCenter.x);
		delta.y = (targetPos.y - screenCenter.y);

		ImVec2 smoothed = { delta.x * _settings.smoothing, delta.y * _settings.smoothing };
		if (abs(smoothed.x) >= 1) {
			delta.x = smoothed.x;
		}
		if (abs(smoothed.y) >= 1) {
			delta.y = smoothed.y;
		}

		return delta;
	}

	void MoveMouse(LONG deltaX, LONG deltaY) {
		INPUT input = { 0 };
		input.type = INPUT_MOUSE;
		input.mi.dx = deltaX;
		input.mi.dy = deltaY;
		input.mi.dwFlags = MOUSEEVENTF_MOVE;

		SendInput(1, &input, sizeof(INPUT));
	}

private:
	const Config::AimSettings& _settings;
	std::unordered_map<EntityType, const Config::AimSettings::PosGetterSettings*> entitiesMap;
	
	struct TargetInfo {
		EntityType type;
		uintptr_t addr;

		Vec3 worldPosition;
		Vec3 velocity;
		std::chrono::steady_clock::time_point lastTime;

		float height;
	};

	float fovRatio = 1;
	std::optional<TargetInfo> _currentTarget;
	ImVec2 screenCenter = ImVec2(CameraManager::get().resolution.width / 2, CameraManager::get().resolution.height / 2);
	bool isActive = false;
};