#pragma once
#include"ESP.h"
#include"AimBot.h"


class CheatManager {

public:
	CheatManager(const Config& config) {
		cheats.push_back(std::make_shared<AimBot>(config.aimSettigns));
		cheats.push_back(std::make_shared<ESP>(config.espSettings));
	}

	void Process() {
		for (const auto& obj : globalObjects) {
			if (!obj->isValid() || !obj->Update()) {
				return;
			}
		}

		for (const auto& cheat : cheats) {
			cheat->Tick();
		}
	}

private:
	std::vector<GlobalObject*> globalObjects = { &CameraManager::get(), &EntitySystem::get() };
	std::vector<std::shared_ptr<Cheat>> cheats;
};