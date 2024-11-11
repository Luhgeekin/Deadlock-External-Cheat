#pragma once
#include"BaseEntity.h"

class Player : public BaseEntity {
public:
	Player(uintptr_t addr, const std::string& name) : BaseEntity(addr), playerName(name) {}

	std::string playerName;
};