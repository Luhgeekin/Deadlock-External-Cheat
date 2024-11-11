#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <vector>
#include <string>
#include <Psapi.h>
#include <sstream>
#include <unordered_map>


class Memory
{
public:
	int ReadCallsCounter = 0;

public:
	Memory(const std::wstring& processName) : _processName(processName) {}

	~Memory() {
		if (_handle) {
			CloseHandle(_handle);
		}
	}

	inline uintptr_t operator [](const std::wstring& moduleName) {
		if (_cachedModules.find(moduleName) == _cachedModules.end()) {
			_cachedModules[moduleName] = FindModuleBaseAddr(moduleName);
		}
		return _cachedModules[moduleName];
	}

	bool Init() {
		PROCESSENTRY32 entry = { };
		entry.dwSize = sizeof(PROCESSENTRY32);
		const HANDLE snapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

		while (Process32Next(snapShot, &entry))
		{
			if (!wcscmp(entry.szExeFile, _processName.c_str()))
			{
				_processID = entry.th32ProcessID;
				_handle = OpenProcess(PROCESS_VM_READ, FALSE, _processID);
				break;
			}
		}

		if (snapShot)
			CloseHandle(snapShot);

		return _handle != NULL;
	}



	template<typename T>
	const T Read(const std::uintptr_t address) /*const*/ noexcept {
		T value = {};
		ReadCallsCounter++;
		ReadProcessMemory(_handle, (LPCVOID)address, &value, sizeof(T), NULL);
		return value;
	}


	std::vector<BYTE> ReadRaw(const std::uintptr_t address, size_t bufferSize) /*const*/ noexcept {
		std::vector<BYTE> result(bufferSize);
		ReadCallsCounter++;
		ReadProcessMemory(_handle, (LPCVOID)address, result.data(), result.size(), NULL);
		return result;
	}

	std::string ReadString(const std::uintptr_t address, size_t bufferSize = 255) const noexcept {
		std::vector<BYTE> bArr = Deadlock.ReadRaw(address, bufferSize);
		auto it = std::find(bArr.begin(), bArr.end(), '\0');
		if (it == bArr.end()) {
			return "";
		}

		std::string str(bArr.begin(), it);
		return str;
	}

	/*
	template<typename T>
	void Write(const std::uintptr_t address, const T value) const noexcept {
		WriteProcessMemory(_handle, (LPVOID)address, &value, sizeof(T), NULL);
	}

	void WriteRaw(const std::uintptr_t address, const std::vector<BYTE>& buffer) const noexcept {
		WriteProcessMemory(_handle, (LPVOID)address, buffer.data(), sizeof(BYTE) * buffer.size(), NULL);
	}*/


private:
	std::uintptr_t FindModuleBaseAddr(const std::wstring& moduleName) const noexcept {
		MODULEENTRY32 entry = { };
		entry.dwSize = sizeof(MODULEENTRY32);


		const HANDLE snapShot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, _processID);

		std::uintptr_t result = 0;

		while (Module32Next(snapShot, &entry))
		{
			if (!moduleName.compare(entry.szModule))
			{
				result = reinterpret_cast<std::uintptr_t>(entry.modBaseAddr);
				break;
			}
		}

		if (snapShot)
			CloseHandle(snapShot);

		return result;
	}

private:
	std::wstring _processName;
	HANDLE _handle = 0;
	unsigned int _processID = 0;
	std::unordered_map<std::wstring, std::uintptr_t> _cachedModules;
	

} Deadlock(L"project8.exe");

