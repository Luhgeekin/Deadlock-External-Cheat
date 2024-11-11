#pragma once
#include<iostream>
#include"../imgui/imgui.h"

struct Vec4 {
	float x;
	float y;
	float z;
	float w;
};

struct Vec3 {

	Vec3() : x(0), y(0), z(0) {}
	Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

	Vec3 operator -(const Vec3& other) const {
		return { x - other.x, y - other.y, z - other.z };
	}


	float x;
	float y;
	float z;

	float DistanceTo(const Vec3& other) const {
		return sqrt(
			pow(x - other.x, 2) +
			pow(y - other.y, 2) +
			pow(z - other.z, 2)
		);
	}

	bool IsZero() const {
		return x == 0 && y == 0 && z == 0;
	}

};


struct Matrix4x4 {
	float m[16] = { 0 };

	bool WorldToScreen(int width, int height, const Vec3& world, ImVec2& screen) {

		Vec4 clipCords;
		clipCords.x = world.x * m[0] + world.y * m[1] + world.z * m[2] + m[3];
		clipCords.y = world.x * m[4] + world.y * m[5] + world.z * m[6] + m[7];
		clipCords.w = world.x * m[12] + world.y * m[13] + world.z * m[14] + m[15];

		if (clipCords.w < 1e-6f) {
			return false;
		}
		Vec3 ndc;
		ndc.x = clipCords.x / clipCords.w;
		ndc.y = clipCords.y / clipCords.w;

		screen.x = width * 0.5f + ndc.x * width * 0.5f;
		screen.y = height * 0.5f - ndc.y * height * 0.5f;

		return true;
	}
};