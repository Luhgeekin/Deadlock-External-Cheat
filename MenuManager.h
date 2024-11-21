#pragma once
#include<iostream>
#include"Config.h"
#include"functional"

#define Stringify(x) {x, std::string(#x)}

class Menu {
public:
	Menu(Config& config, HWND hwnd) : _config(config), _hwnd(hwnd) {};

	void Render() {
		ImGui::SetNextWindowSize({ 635, 435 });

		ImGui::Begin("Main Menu");
        {
            static int selectedTab = 0;

            ImGui::BeginChild("Left Pane", ImVec2(150, 0), true);
            {
                if (ImGui::Selectable("ESP", selectedTab == 0)) {
                    selectedTab = 0;
                }
                if (ImGui::Selectable("AimBot", selectedTab == 1)) {
                    selectedTab = 1;
                }
                if (ImGui::Selectable("Config", selectedTab == 2)) {
                    selectedTab = 2;
                }
            }
            ImGui::EndChild();

            ImGui::SameLine();

            ImGui::BeginChild("Right Pane", ImVec2(0, 0), true);
            {
                switch (selectedTab) {
                case 0:
                {
                    RenderESPMenu(_config.espSettings);
                    break;
                }
                case 1:
                {
                    RenderAimMenu(_config.aimSettigns);
                    break;
                }
                case 2:
                {
                    RenderConfigMenu();
                    break;
                }
                }
            }
            ImGui::EndChild();

        }
        ImGui::End();
	}


private:
    class KeyBind {
    public:
        KeyBind(int& key) : 
            _key(key),
            _waitingForKey(false)
        {}
        
        void Button(const std::string& label) {
            ImGui::Text("%s:", label.c_str());
            ImGui::SameLine();
            if (ImGui::Button(_waitingForKey ? "press any key" : GetKeyName(_key).c_str())) {
                _waitingForKey = true;
            }

            if (_waitingForKey) {
                for (int i = 1; i < 255; i++) {
                    if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
                        _waitingForKey = false;
                        break;
                    }
                    if (GetAsyncKeyState(i) & 0x8000) {
                        _key = i;
                        _waitingForKey = false;
                        break;
                    }
                }
            }
        }

    private:
        std::string GetKeyName(int key) {
            if (key >= '0' && key <= '9') {
                return std::string(std::to_string(key - 0x30));
            }
            if (key >= 'A' && key <= 'Z') {
                return std::string(1, static_cast<char>(key));
            }
            if (key >= VK_NUMPAD1 && key <= VK_NUMPAD9) {
                return std::string("VK_NUMPAD" + std::to_string(key - 0x60));
            }
            if (key >= VK_F1 && key <= VK_F24) {
                return std::string("VK_F" + std::to_string(key - 0x70));
            }

            static std::unordered_map<int, std::string> KeyToStringMap = {
                Stringify(VK_LBUTTON),
                Stringify(VK_RBUTTON),
                Stringify(VK_CANCEL),
                Stringify(VK_MBUTTON),
                Stringify(VK_XBUTTON1),
                Stringify(VK_XBUTTON2),

                Stringify(VK_BACK),
                Stringify(VK_TAB),
                Stringify(VK_RETURN),
                Stringify(VK_SHIFT),
                Stringify(VK_CONTROL),
                Stringify(VK_MENU),
                Stringify(VK_PAUSE),
                Stringify(VK_CAPITAL),
                Stringify(VK_ESCAPE),
                Stringify(VK_SPACE),

                Stringify(VK_PRIOR),  
                Stringify(VK_NEXT),   
                Stringify(VK_END),
                Stringify(VK_HOME),
                Stringify(VK_LEFT),
                Stringify(VK_UP),
                Stringify(VK_RIGHT),
                Stringify(VK_DOWN),

                Stringify(VK_NUMLOCK),
                Stringify(VK_SCROLL),
                Stringify(VK_INSERT),
                Stringify(VK_DELETE),
                Stringify(VK_SNAPSHOT),
            };

            if (KeyToStringMap.find(key) != KeyToStringMap.end()) {
                return KeyToStringMap[key];
            }

            return "UNKNONWN";
        }

    private:
        bool _waitingForKey;
        int& _key;
    };


    //                                                  AimBot
    //################################################################################################################
    void RenderAimMenu(Config::AimSettings& settings) {
        static KeyBind aimKey(settings.key);

        ImGui::BeginTabBar("tabs");
        {
            if (ImGui::BeginTabItem("global")) {
                ImGui::Checkbox("Enable", &settings.isOn);
                aimKey.Button("Aim key");
                ImGui::SliderFloat("max distance", &settings.maxDistance, 500.f, 10000.0f);
                ImGui::SliderFloat("fov", &settings.fov, 50.f, 500.f);
                ImGui::SliderFloat("smoothing", &settings.smoothing, 0.1f, 1.0f);

                ImGui::Checkbox("priority", &settings.isPriorityEnabled);
                ImGui::Checkbox("Remember target", &settings.rememberTarget);
                ImGui::Checkbox("Prediction", &settings.prediction);

                ImGui::Checkbox("Fov circle", &settings.fovCircle);
                ImGui::ColorEdit4("FOV Color", (float*)&settings.fovColor);
                ImGui::Checkbox("Line to target", &settings.lineToTarget);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("player")) {
                RenderPosGetterMenu(settings.players, "players", true);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("trooper")) {
                RenderPosGetterMenu(settings.troopers, "trooper", true);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("orb")) {
                RenderPosGetterMenu(settings.orbs, "orb", false);
                ImGui::EndTabItem();
            }
        }
        ImGui::EndTabBar();
    }

    void RenderPosGetterMenu(Config::AimSettings::PosGetterSettings& settings, const std::string& name, bool hasLock) {
        ImGui::PushID(name.c_str());

        ImGui::Checkbox("Enable", &settings.isOn);
        if (settings.isOn) {
            ImGui::SliderInt((name.c_str() + std::string(" Priority")).c_str(), &settings.priority, 1, 3);
            if (hasLock) {
                const char* options[] = { "origin", "head", "body" };
                ImGui::Combo("Lock", (int*)&settings.lock, options, IM_ARRAYSIZE(options));
            }
        }

        ImGui::PopID();
    }
    //################################################################################################################






    //                                                    ESP 
    //################################################################################################################
    void RenderESPMenu(Config::ESPSettings& settings) {
        ImGui::BeginTabBar("tabs");
        {
            if (ImGui::BeginTabItem("global")) {
                ImGui::Checkbox("Enable", &settings.isOn);
                ImGui::SliderFloat("max distance", &settings.maxDistance, 500.f, 10000.0f);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("player")) {
                ImGui::Checkbox("Enable", &settings.players.isOn);
                RenderPlayerDrawerMenu(settings.players);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("trooper")) {
                ImGui::Checkbox("Enable", &settings.troopers.isOn);
                RenderEntityBaseDrawerMenu(settings.troopers);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("orb")) {
                ImGui::Checkbox("Enable", &settings.orbs.isOn);
                RenderOrbDrawerMenu(settings.orbs);
                ImGui::EndTabItem();
            }
        }
        ImGui::EndTabBar();
    }


    void RenderEntityBaseDrawerMenu(Config::ESPSettings::EntityBaseRendererSettings& settings) {
        ImGui::Checkbox("Render Boxes", &settings.doesDrawBoxes);
        if (settings.doesDrawBoxes) {

            if (ImGui::CollapsingHeader("Box Settings")) {
                const char* options[] = { "standart box", "corner box" };
                ImGui::Combo("BoxType", (int*)&settings.boxType, options, IM_ARRAYSIZE(options));
                ImGui::ColorEdit4("Box Color", (float*)&settings.boxColor);
                ImGui::ColorEdit4("Box Filling Color", (float*)&settings.boxFillingColor);
                ImGui::ColorEdit4("Distance color", (float*)&settings.distanceTextColor);
            }

        }
        ImGui::Checkbox("Render Lines to Enemies", &settings.doesDrawLines);
        if (settings.doesDrawLines) {
            if (ImGui::CollapsingHeader("Line Settings")) {
                ImGui::ColorEdit4("Line Color", (float*)&settings.lineToEnemyColor);
            }
        }
        ImGui::Checkbox("Render Health Bar", &settings.doesDrawHealthBar);
        ImGui::Checkbox("Render distanced", &settings.doesDrawDistance);
    }

    void RenderPlayerDrawerMenu(Config::ESPSettings::PlayerRendererSettings& settings) {
        RenderEntityBaseDrawerMenu(settings);
        ImGui::Checkbox("draw name", &settings.doesDrawName);
        if (settings.doesDrawName) {
            if (ImGui::CollapsingHeader("Name Settings")) {
                ImGui::ColorEdit4("name color", (float*)&settings.nameColor);
            }
        }
    }

    void RenderOrbDrawerMenu(Config::ESPSettings::OrbRendererSettings& settings) {
        ImGui::ColorEdit4("Orb circle color", (float*)&settings.circleColor);
        ImGui::ColorEdit4("Orb circle filling", (float*)&settings.fillingColor);
    }
    //################################################################################################################






    //                                                 Config
    //################################################################################################################
    void RenderConfigMenu() {
        if (ImGui::Button("save")) {
            auto fileName = GetFileName(true);
            if (!fileName) {
                return;
            }

            SaveConfig(*fileName, _config);
        }

        ImGui::SameLine();

        if (ImGui::Button("load")) {
            auto fileName = GetFileName(false);
            if (!fileName) {
                return;
            }

            auto tempCfg = LoadConfig(*fileName);
            if (!tempCfg) {
                return;
            }

            _config = *tempCfg;
        }

    }

    std::optional<std::string> GetFileName(bool isSave) {
        OPENFILENAMEA ofn;
        ZeroMemory(&ofn, sizeof(ofn));

        char currentDirectory[MAX_PATH] = "";
        GetCurrentDirectoryA(MAX_PATH, currentDirectory);

        char fileName[MAX_PATH] = "";

        ofn.lpstrInitialDir = currentDirectory;
        ofn.lStructSize = sizeof(ofn);
        ofn.hwndOwner = _hwnd;
        ofn.lpstrFilter = ".cfg";
        ofn.lpstrFile = fileName;
        ofn.nMaxFile = MAX_PATH;
        ofn.lpstrDefExt = "cfg";

        if (isSave) {
            ofn.Flags = OFN_OVERWRITEPROMPT;
            if (GetSaveFileNameA(&ofn)) {
                return fileName;
            }
        }
        else {
            ofn.Flags = OFN_FILEMUSTEXIST;
            if (GetOpenFileNameA(&ofn)) {
                return fileName;
            }
        }

        return std::nullopt;
    }
    //################################################################################################################


private:
    
    HWND _hwnd;
	Config& _config;
};