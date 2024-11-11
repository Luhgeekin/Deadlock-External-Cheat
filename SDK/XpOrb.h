#pragma once
#include"Entity.h"

class XpOrb : public Entity {
public:
	XpOrb(uintptr_t addr) : Entity(addr) {}

	bool _Update() override {
		uintptr_t gameScene = Deadlock.Read<uintptr_t>(_addr + C_BaseEntity::m_pGameSceneNode);
		if (!gameScene) {
			return false;
		}

		positions[BoneType::Origin] = Lazy<Vec3>([gameScene] {return Deadlock.Read<Vec3>(gameScene + 0x88); });
		isVisible = Lazy<bool>([this] {return Deadlock.Read<bool>(_addr + 0x4A8); });

		return true;
	}

	bool IsEligible() override {
		return *isVisible;
	}

	Lazy<bool> isVisible;
};