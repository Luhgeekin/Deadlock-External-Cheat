#pragma once
#include"Common.h"
#include"GlobalObject.h"

constexpr float STANDART_GAME_FOV = 75.f;

class CameraManager : public GlobalObject, public Singleton<CameraManager> {

	DECLARE_SINGLETON(CameraManager)

public:

	bool Update() override {
		uintptr_t thirdPersonCamera = Deadlock.Read<uintptr_t>(_addr + 0x28);
		if (!thirdPersonCamera) {
			return false;
		}

		float tempFov = Deadlock.Read<float>(thirdPersonCamera + 0x50);
		if (!tempFov) {
			return false;
		}
		fov = tempFov;

		float tempPitch = Deadlock.Read<float>(thirdPersonCamera + 0x94);
		if (!tempPitch) {
			return false;
		}
		pitch = ToRadian(tempPitch);

		float tempYaw = Deadlock.Read<float>(thirdPersonCamera + 0x98);
		if (!tempYaw) {
			return false;
		}
		yaw = ToRadian(tempYaw);

		viewDirection = {
			cos(yaw) * cos(pitch),
			sin(yaw) * cos(pitch),
			sin(pitch)
		};

		viewMatrix = Deadlock.Read<Matrix4x4>(Deadlock[L"client.dll"] + mainOffsets::viewMatrix);
		return true;
	}

	ImVec2 WorldToScreen(const Vec3& world) {
		ImVec2 buf{ -1, -1 };
		viewMatrix.WorldToScreen(resolution.width, resolution.height, world, buf);

		return buf;
	}

private:

	void UpdateSelfAddress() override {
		_addr = Deadlock[L"client.dll"] + mainOffsets::camera;
	}

	float ToRadian(float degree) {
		static constexpr float PI = 3.1415926535;
		return degree * PI / 180;
	}

public:

	struct MonitorResolution {
		int width;
		int height;
	} resolution{ GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN) };


	float fov = 0;
	float pitch = 0;
	float yaw = 0;
	Vec3 viewDirection;

	Matrix4x4 viewMatrix{ 0 };
};