#pragma once
#include"Common.h"
#include"BoneArray.h"
#include"CameraManager.h"

class Entity : public GameObject {

public:
	Entity(uintptr_t addr) :
		GameObject(addr),
		positions(std::vector<Lazy<Vec3>>(3)),
		screenPositions(std::vector<Lazy<ImVec2>>(3))
	{}

	bool Update() override final {
		if (!_Update()) {
			return false;
		}
		for (int i = 0; i <= BoneType::Body; i++) {
			screenPositions[i] = Lazy<ImVec2>([this, i] {
				ImVec2 buf;
				if (!CameraManager::get().WorldToScreen(*positions[i], buf)) {
					return ImVec2(-1,-1);
				}
				return buf; 
				}
			);
		}
		return true;
	}

	virtual bool IsEligible() = 0;

	Vec3 GetWorldPosition(BoneType bone) {
		if (bone > positions.size() - 1) {
			return {};
		}

		return *positions[bone];
	}

	bool GetScreenPosition(BoneType bone, ImVec2& buf) {
		if (bone > positions.size() - 1) {
			return false;
		}

		ImVec2 ScreenPos = *screenPositions[bone];
		if (ScreenPos.x == -1 && ScreenPos.y == -1) {
			return false;
		}

		buf = ScreenPos;
		return true;
	}


protected:
	virtual bool _Update() = 0;

	std::vector<Lazy<Vec3>> positions;

private:
	std::vector<Lazy<ImVec2>> screenPositions;
};