#pragma once
#include"GameObject.h"

class GlobalObject : public GameObject {

public:
	GlobalObject() : GameObject(0) {};

	bool isValid() override {
		UpdateSelfAddress();
		return _addr != 0;
	}

private:

	virtual void UpdateSelfAddress() = 0;
};