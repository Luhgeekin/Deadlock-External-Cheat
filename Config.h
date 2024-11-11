#pragma once
#include<iostream>
#include<fstream>
#include"imgui/imgui.h"
#include"SDK/BoneArray.h"
#include"optional"


struct Config {

	struct CheatSettings {
		bool isOn = true;
		float maxDistance = 5000;
	};

	struct AimSettings : public CheatSettings {
		float smoothing = 0.25;
		float fov = 100;

		bool fovCircle = true;
		bool lineToTarget = true;

		ImVec4 fovColor = ImVec4(1.0, 1.0, 1.0, 1.0);


		struct PosGetterSettings {
			bool isOn;
			int priority;
			BoneType lock;
		};

		PosGetterSettings players{ true, 2, BoneType::Head };
		PosGetterSettings troopers{ true, 3, BoneType::Head };
		PosGetterSettings orbs{ true, 1, BoneType::Origin };


	};

	AimSettings aimSettigns;


	struct ESPSettings : public CheatSettings{
	
		struct OrbRendererSettings {
			bool isOn;

			ImVec4 pointColor;

		}orbs{ true, ImVec4(1.0, 0, 0, 1.0) };

		struct EntityBaseRendererSettings {
			bool isOn;

			bool doesDrawBoxes;
			bool doesDrawHealthBar;
			bool doesDrawLines;
			bool doesDrawDistance;

			ImVec4 boxColor;
			ImVec4 boxFillingColor;
			ImVec4 lineToEnemyColor;
			ImVec4 distanceTextColor;

			enum BoxType : int {
				Standart = 0,
				Cornenr = 1
			}boxType = Standart;

		}troopers{ 
			false, true, true, false, true,
			ImVec4(1.0, 1.0, 1.0, 1.0),
			ImVec4(1.0, 1.0, 1.0, 0.4),
			ImVec4(1.0, 1.0, 1.0, 1.0),
			ImVec4(0.8, 0.8, 0.8, 1)
		};

		struct PlayerRendererSettings : public EntityBaseRendererSettings {
			ImVec4 nameColor;
			bool doesDrawName;

		}players{
			true, true, true, false, true,
			ImVec4(1.0, 1.0, 1.0, 1.0),
			ImVec4(1.0, 1.0, 1.0, 0.4),
			ImVec4(1.0, 1.0, 1.0, 1.0),
			ImVec4(0.8, 0.8, 0.8, 1),
			EntityBaseRendererSettings::BoxType::Standart,
			ImVec4(1, 0.2, 0.2, 1),
			true
		};

		
	};

	ESPSettings espSettings; 
};


bool SaveConfig(const std::string& name, const Config& cfg) {
	std::ofstream ofs(name, std::ios::binary);
	if (!ofs.is_open()) {
		return false;
	}
	
	ofs.write((char*)&cfg, sizeof(Config));

	return ofs.good();
}

std::optional<Config> LoadConfig(const std::string& name) {
	std::ifstream ifs(name, std::ios::binary);
	if (!ifs.is_open()) {
		return {};
	}

	Config cfg;
	if(ifs.read((char*)&cfg, sizeof(Config))){
		return cfg;
	}
	else {
		return {};
	}
}

