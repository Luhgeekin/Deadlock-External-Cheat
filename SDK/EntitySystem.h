#pragma once
#include"GlobalObject.h"
#include"BaseEntity.h"
#include"Player.h"
#include"XpOrb.h"


class EntitySystem : public GlobalObject, public Singleton<EntitySystem> {

	DECLARE_SINGLETON(EntitySystem)

public:

	bool Update() override {
		auto curTime = std::chrono::steady_clock::now();

		auto time = std::chrono::duration_cast<std::chrono::milliseconds>(curTime - _lastCacheUpdate);
		if (time > _interval) {
			if (UpdateAll()) {
				_lastCacheUpdate = curTime;
				return true;
			}
			return false;
		}
		else {
			return UpdateOnlyCache();
		}

	}

	const std::vector<std::shared_ptr<Entity>>& operator [] (EntityType type) {
		if (_list.find(type) == _list.end()) {
			static const std::vector<std::shared_ptr<Entity>> empty = {};
			return empty;
		}
		return _list[type];
	}

	void ChangeRelevantTypes(const std::set<EntityType>& types) {
		_relevantTypes = types;
	}

	std::shared_ptr<Entity> GetEntityByAddr(uintptr_t addr) {
		for (const auto& [type, vec] : _list) {
			for (const auto& ent : vec) {
				if (*ent == addr) {
					return ent;
				}
			}
		}
		return nullptr;
	}

	std::shared_ptr<Entity> GetEntityByAddr(uintptr_t addr, EntityType entType) {
		if (_list.find(entType) == _list.end()) {
			return nullptr;
		}

		for (const auto& ent : _list[entType]) {
			if (*ent == addr) {
				return ent;
			}
		}

		return nullptr;
	}

private:

	void UpdateSelfAddress() override {
		_addr = Deadlock.Read<uintptr_t>(Deadlock[L"client.dll"] + mainOffsets::entityList);
		_entry = Deadlock.Read<uintptr_t>(_addr + 0x10);
	}

	bool UpdateAll() {
		for (const auto& type : _relevantTypes) {
			_list[type] = std::vector<std::shared_ptr<Entity>>();
		}

		int size = GetMaxEntities();

		if (!size) {
			return false;
		}

		for (int i = 0; i < size; i++) {
			uintptr_t entity = GetEntityBase(i);
			if (!entity) {
				continue;
			}

			EntityType tempType = GetEntityType(entity);
			if (_list.find(tempType) == _list.end()) {
				continue;
			}

			auto temp = CreateEntity(tempType, entity);
			if (temp == nullptr) {
				continue;
			}

			_list[tempType].push_back(temp);
		}

		if (localPlayer == nullptr || !localPlayer->Update()) {
			return false;
		}

		RemoveLocalTeam(*localPlayer->teamNum);

		return true;
	}

	void RemoveLocalTeam(BYTE teamNum) {
		for (auto& [type, vec] : _list) {
			if (type == EntityType::OrbEnt) {
				continue;
			}

			vec.erase(
				std::remove_if(vec.begin(), vec.end(), [teamNum](std::shared_ptr<Entity> ent) {
					auto baseEnt = std::dynamic_pointer_cast<BaseEntity>(ent);
					return baseEnt != nullptr && *baseEnt->teamNum == teamNum;
					}),
				vec.end()
			);
		}
	}

	bool UpdateOnlyCache() {
		for (const auto& elem : _list) {
			for (const auto& ent : elem.second) {
				if (!ent->Update()) {
					return false;
				}
			}
		}

		if (localPlayer == nullptr || !localPlayer->Update()) {
			return false;
		}

		return true;
	}

	std::shared_ptr<Entity> CreateEntity(EntityType type, uintptr_t addr) {

		std::shared_ptr<Entity> entity;

		switch (type) {

		case EntityType::PlayerEnt:
		{
			std::string playerName = Deadlock.ReadString(addr + 0x648, 64);
			bool isLocal = Deadlock.Read<bool>(addr + 0x6d8);

			uintptr_t playerPawnHandle = Deadlock.Read<uintptr_t>(addr + 0x614);
			uintptr_t playerPawn = Deadlock.Read<uintptr_t>(_entry + 0x78 * (playerPawnHandle & 0x1FF));

			if (isLocal) {
				localPlayer = std::make_shared<Player>(playerPawn, playerName);
				return nullptr;
			}

			entity = std::make_shared<Player>(playerPawn, playerName);
			break;
		}

		case EntityType::OrbEnt:
		{
			entity = std::make_shared<XpOrb>(addr);
			break;
		}

		case EntityType::TrooperEnt:
		{
			entity = std::make_shared<BaseEntity>(addr);
			break;
		}

		}

		if (!entity->Update()) {
			return nullptr;
		}

		return entity;
	}

	uintptr_t GetEntityBase(int index) {
		uintptr_t entityBase = Deadlock.Read<uintptr_t>(_entry + 0x78 * (index & 0x1FF));
		return entityBase;
	}

	EntityType GetEntityType(uintptr_t entity) {

		static std::unordered_map<std::string, EntityType> EntityNameToEntityTypeMap = {
			{"citadel_player_controller", EntityType::PlayerEnt},
			{"item_xp",                   EntityType::OrbEnt},
			{"npc_trooper",               EntityType::TrooperEnt},
		};

		uintptr_t entityIdenity = Deadlock.Read<uintptr_t>(entity + 0x10);
		uintptr_t sPtr = Deadlock.Read<uintptr_t>(entityIdenity + 0x20);
		std::string typeStr = Deadlock.ReadString(sPtr, 30);

		if (EntityNameToEntityTypeMap.find(typeStr) == EntityNameToEntityTypeMap.end()) {
			return EntityType::UnknownEnt;
		}

		return EntityNameToEntityTypeMap[typeStr];
	}

	int GetMaxEntities() {
		return Deadlock.Read<int>(_addr + 0x1530);
	}


private:
	uintptr_t _entry = 0;

	std::set<EntityType> _relevantTypes = { EntityType::PlayerEnt, EntityType::OrbEnt, EntityType::TrooperEnt };
	std::unordered_map<EntityType, std::vector<std::shared_ptr<Entity>>> _list;


	std::chrono::milliseconds _interval = std::chrono::milliseconds(1000);
	std::chrono::steady_clock::time_point _lastCacheUpdate = std::chrono::steady_clock::now() - _interval;

public:
	std::shared_ptr<Player> localPlayer = nullptr;
};
