#pragma once
#include"Common.h"
#include"Entity.h"


class BaseEntity : public Entity {
public:

	BaseEntity(uintptr_t addr) : Entity(addr) {}

	bool _Update() override {
		uintptr_t gameScene = Deadlock.Read<uintptr_t>(_addr + 0x330);
		uintptr_t sPtr = Deadlock.Read<uintptr_t>(gameScene + 0x248);

		std::string modelName = Deadlock.ReadString(sPtr);
		if (modelName.size() == 0) {
			return false;
		}

		BoneArray boneArr = Deadlock.Read<uintptr_t>(gameScene + CSkeletonInstance::m_modelState + 0x80);
		if (!boneArr.isValid()) {
			return false;
		}

		std::vector<int> boneIndecies = GetBoneIndeces(modelName);
		if (boneIndecies.size() == 0) {
			return false;
		}

		int bone = BoneType::Origin;
		positions[bone++] = Lazy<Vec3>([gameScene] {return Deadlock.Read<Vec3>(gameScene + CGameSceneNode::m_vecAbsOrigin); });

		for (const auto& index : boneIndecies) {
			positions[bone++] = Lazy<Vec3>([boneArr, index] { return boneArr[index]; });
		}

		currentHealth = Lazy<int>([this] { return Deadlock.Read<int>(_addr + C_BaseEntity::m_iHealth); });
		maxHealth = Lazy<int>([this] {	return max(Deadlock.Read<int>(_addr + C_BaseEntity::m_iMaxHealth), *currentHealth); }); 
		teamNum = Lazy<BYTE>([this] { return Deadlock.Read<BYTE>(_addr + C_BaseEntity::m_iTeamNum); });
		isDead = Lazy<bool>([this] { return *currentHealth <= 0; });
		isDormant = Lazy<bool>([this, gameScene] { return Deadlock.Read<bool>(gameScene + CGameSceneNode::m_bDormant); });
		return true;
	}

	bool IsEligible() override {
		return !*isDead && !*isDormant;
	}

	Lazy<int> currentHealth;
	Lazy<int> maxHealth;
	Lazy<BYTE> teamNum;
	Lazy<bool> isDead;
	Lazy<bool> isDormant;
};