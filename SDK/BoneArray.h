#pragma once
#include"Common.h"
#include"GameObject.h"

class BoneArray : public GameObject {
public:
	BoneArray(uintptr_t addr) : GameObject(addr) {}

	Vec3 operator [] (int index) const {
		return Deadlock.Read<Vec3>(_addr + index * 32);
	}

	bool Update() override { return true; }
};



std::vector<int> GetBoneIndeces(std::string modelName) {

	//index 0: head; 
	//index 1: body;
	static std::unordered_map<std::string, std::vector<int>> modelToBoneIndexMap = {
	{"models/heroes_staging/atlas_detective_v2/atlas_detective.vmdl", {7, 4}},
	{"models/heroes_staging/bebop/bebop.vmdl", {6, 3}},
	{"models/heroes_staging/prof_dynamo/prof_dynamo.vmdl", {13, 8}},
	{"models/heroes_staging/archer/archer.vmdl", {17, 10}},
	{"models/heroes_staging/haze/haze.vmdl", {7, 4}},
	{"models/heroes_staging/inferno_v4/inferno.vmdl", {30, 10}},
	{"models/heroes_staging/tengu/tengu_v2/tengu.vmdl", {13, 10}},
	{"models/heroes_staging/kelvin_v2/kelvin.vmdl", {12,10}},
	{"models/heroes_staging/ghost/ghost.vmdl", {11, 8}},
	{"models/heroes_staging/lash_v2/lash.vmdl", {12, 9}},
	{"models/heroes_staging/engineer/engineer.vmdl", {7, 4}},
	{"models/heroes_staging/digger/digger.vmdl", {25, 7}},
	{"models/heroes_staging/chrono/chrono.vmdl", {8, 5}},
	{"models/heroes_staging/synth/synth.vmdl", {13, 10}},
	{"models/heroes_staging/gigawatt_prisoner/gigawatt_prisoner.vmdl", {14, 10}},
	{"models/heroes_staging/shiv/shiv.vmdl", {13, 10}},
	{"models/heroes_staging/hornet_v3/hornet.vmdl", {7, 4}},
	{"models/heroes_staging/viscous/viscous.vmdl", {7, 4}},
	{"models/heroes_staging/warden/warden.vmdl", {11, 8}},
	{"models/heroes_staging/wraith_gen_man/wraith_gen_man.vmdl", {7, 4}},
	{"models/heroes_staging/yamato_v2/yamato.vmdl", {12, 17}},
	{"models/heroes_staging/gen_man/gen_man.vmdl", {12, 7}},
	{"models/heroes_staging/mirage/mirage_gen_man.vmdl", {8, 5}},
	{"models/npc/medic/medic_model.vmdl", {26}},
	{"models/npc/trooper/trooper_melee.vmdl", {15}},
	{"models/npc/trooper/trooper_humanoid.vmdl", {8} },
	{"models/animgraph2/trooper_medic/trooper_medic.vmdl", {7}},
	{"models/animgraph2/trooper_melee/trooper_melee.vmdl", {8}},
	{"models/animgraph2/trooper_humanoid/trooper_humanoid_ag2.vmdl", {38} }
	};

	if (modelToBoneIndexMap.find(modelName) == modelToBoneIndexMap.end()) {
		return {};
	}

	return modelToBoneIndexMap[modelName];
}