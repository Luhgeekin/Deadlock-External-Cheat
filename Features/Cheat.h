#pragma once
#include"../Config.h"

class Cheat {
	friend class CheatManager;

public:
	Cheat(const Config::CheatSettings& settings) : 
		_settings(settings)
	{}

private:
	void Tick() {
		if (!_settings.isOn) {
			return;
		}
		_Tick();
	};

protected:
	virtual void _Tick() = 0;

	virtual std::vector<EntityType> GetRelevantEntities() = 0;
	
	const Config::CheatSettings& _settings;
};