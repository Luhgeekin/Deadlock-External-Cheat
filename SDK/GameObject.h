#pragma once
#include"Common.h"

class GameObject {

public:
	GameObject(uintptr_t addr) : _addr(addr) {}

	bool operator == (const GameObject& other) {
		return other._addr == _addr;
	}

	virtual bool isValid() {
		return _addr != 0;
	}

	virtual bool Update() = 0;

protected:
	uintptr_t _addr = 0;
};