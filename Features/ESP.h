#pragma once
#include "../imgui/imgui.h"
#include"../SDK/EntitySystem.h"
#include"../SDK/CameraManager.h"

#include "Cheat.h"

class DrawingUtils {
public:

    static void DrawLine(const ImVec2& v1, const ImVec2& v2, ImU32 color) {
        ImGui::GetBackgroundDrawList()->AddLine(v1, v2, color, 3);
    }

    static void DrawBox(const ImVec2& v1, const ImVec2& v2, ImU32 color, ImU32 fillingColor) {
        ImGui::GetBackgroundDrawList()->AddRect(v1, v2, color, 0, 0, 3);
        ImGui::GetBackgroundDrawList()->AddRectFilled(v1, v2, fillingColor, 0, 0);
    }

    static void DrawCornerBox(const ImVec2& topLeft, const ImVec2& bottomRight, ImU32 color, ImU32 fillingColor)
    {

        float width = bottomRight.x - topLeft.x;
        float height = bottomRight.y - topLeft.y;

        float lineLengthX = width * 0.25f;
        float lineLengthY = height * 0.25f;

        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(topLeft.x, topLeft.y), ImVec2(topLeft.x + lineLengthX, topLeft.y), color, 2);
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(topLeft.x, topLeft.y), ImVec2(topLeft.x, topLeft.y + lineLengthY), color, 2);

        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottomRight.x, topLeft.y), ImVec2(bottomRight.x - lineLengthX, topLeft.y), color, 2);
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottomRight.x, topLeft.y), ImVec2(bottomRight.x, topLeft.y + lineLengthY), color, 2);

        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(topLeft.x, bottomRight.y), ImVec2(topLeft.x + lineLengthX, bottomRight.y), color, 2);
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(topLeft.x, bottomRight.y), ImVec2(topLeft.x, bottomRight.y - lineLengthY), color, 2);

        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottomRight.x, bottomRight.y), ImVec2(bottomRight.x - lineLengthX, bottomRight.y), color, 2);
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottomRight.x, bottomRight.y), ImVec2(bottomRight.x, bottomRight.y - lineLengthY), color, 2);

        ImGui::GetBackgroundDrawList()->AddRectFilled(topLeft, bottomRight, fillingColor, 0, 0);
    }

    static void DrawHealthBar(const ImVec2& bottom, int height, int maxHealth, int curHealth) {
        float ratio = (float)curHealth / maxHealth;
        ImVec2 top = { bottom.x, bottom.y + height * ratio };

        ImU32 healthBarColor = ImGui::ColorConvertFloat4ToU32(ImVec4((1.0f - ratio), ratio, 0, 1.0));
        DrawLine(bottom, top, healthBarColor);
    }

    static void DrawDistance(const ImVec2& pos, float distance, ImU32 color) {
        int mDistance = distance / 100;
        std::string str = std::to_string(mDistance) + "m";
        DrawCentralizedText(pos, str, color);
    }

    static void DrawCentralizedText(const ImVec2& pos, const std::string& text, ImU32 color) {
        ImVec2 textSize = ImGui::CalcTextSize(text.c_str());
        ImGui::GetBackgroundDrawList()->AddText(
            { pos.x - textSize.x / 2, pos.y },
            color,
            text.c_str()
        );

    }

};



class ESPRendererBase  {
public:
    ESPRendererBase(const bool& isOn) : isOn(isOn) {}

    void Render(std::shared_ptr<Entity> entity) {
        if (!isOn || !entity->IsEligible()) {
            return;
        }
        
        ProcessEntity(entity);
    }
    
protected:
    virtual void ProcessEntity(std::shared_ptr<Entity> entity) = 0;

public:
    const bool& isOn;
};



template<typename T>
class ESPRenderer;

template<>
class ESPRenderer<BaseEntity> : public ESPRendererBase{

public:
    ESPRenderer(const Config::ESPSettings::EntityBaseRendererSettings& settings) : 
        ESPRendererBase(settings.isOn),  
        _settings(settings)
    {};

    void ProcessEntity(std::shared_ptr<Entity> ent) override {
        ImVec2 bottom;
        ImVec2 top;
        if (!GetRect(ent, 60, bottom, top)) {
            return;
        }

        Draw(ent, bottom, top);
    }

protected:
    bool GetRect(std::shared_ptr<Entity> ent, float height, ImVec2& bottom, ImVec2& top) {
        if (!ent->GetScreenPosition(BoneType::Origin, bottom)) {
            return false;
        }

        if (!CameraManager::get().WorldToScreen(ent->GetWorldPosition(BoneType::Origin) + Vec3(0, 0, height), top)) {
            return false;
        }

        return true;
    }

    void Draw(std::shared_ptr<Entity> ent, ImVec2 bottom, ImVec2 top) {
        auto enemy = std::dynamic_pointer_cast<BaseEntity>(ent);
        if (!enemy) {
            return;
        }

        top.y /= 1.03;
        int height = top.y - bottom.y;
        int width = height / 2.f;

        if (_settings.doesDrawBoxes) {
            boxes[_settings.boxType](
                ImVec2(top.x - width / 2, top.y),
                ImVec2(bottom.x + width / 2, bottom.y),
                ImGui::ColorConvertFloat4ToU32(_settings.boxColor),
                ImGui::ColorConvertFloat4ToU32(_settings.boxFillingColor)
                );
        }

        if (_settings.doesDrawHealthBar) {
            DrawingUtils::DrawHealthBar(
                ImVec2(bottom.x + width / 2 - 7, bottom.y),
                height,
                *enemy->maxHealth,
                *enemy->currentHealth
            );
        }

        if (_settings.doesDrawLines) {
            DrawingUtils::DrawLine(
                { (float)CameraManager::get().resolution.width / 2, (float)CameraManager::get().resolution.height },
                bottom,
                ImGui::ColorConvertFloat4ToU32(_settings.lineToEnemyColor)
            );
        }

        if (_settings.doesDrawDistance) {
            DrawingUtils::DrawDistance(
                { bottom.x, bottom.y + 10 },
                EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin).DistanceTo(ent->GetWorldPosition(BoneType::Origin)),
                ImGui::ColorConvertFloat4ToU32(_settings.distanceTextColor)
            );
        }
    }

private:
    typedef void (*DrawBoxFn)(const ImVec2&, const ImVec2&, ImU32, ImU32);
    DrawBoxFn boxes[2]{ DrawingUtils::DrawBox, DrawingUtils::DrawCornerBox };

    const Config::ESPSettings::EntityBaseRendererSettings& _settings;
};



template<>
class ESPRenderer<Player> : public ESPRenderer<BaseEntity>
{
public:
    ESPRenderer(const Config::ESPSettings::PlayerRendererSettings& settings) :
        ESPRenderer<BaseEntity>(settings),
        _settings(settings) 
    {}

    void ProcessEntity(std::shared_ptr<Entity> ent) override {
        ImVec2 bottom;
        ImVec2 top;
        if (!GetRect(ent, 85, bottom, top)) {
            return;
        }

        Draw(ent, bottom, top);

        auto enemy = std::dynamic_pointer_cast<Player>(ent);
        if (enemy == nullptr) {
            return;
        }

        if (_settings.doesDrawName) {
            DrawingUtils::DrawCentralizedText(
                { top.x, top.y - 40 }, 
                enemy->playerName, 
                ImGui::ColorConvertFloat4ToU32(_settings.nameColor)
            );
        }
    }

private:
    const Config::ESPSettings::PlayerRendererSettings& _settings;
};



template<>
class ESPRenderer<XpOrb> : public ESPRendererBase {
public:

    ESPRenderer(const Config::ESPSettings::OrbRendererSettings& settings) : 
        ESPRendererBase(settings.isOn), 
        _settings(settings) 
    {};


    void ProcessEntity(std::shared_ptr<Entity> entity) override {
        float fixedDistance = 500.f;
        float distance = EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin).DistanceTo(entity->GetWorldPosition(BoneType::Origin));
        float distanceRatio =  fixedDistance / distance;

        ImVec2 orbScreenPosition;
        if (!entity->GetScreenPosition(BoneType::Origin, orbScreenPosition)) {
            return;
        }

        int circleSize = 15 * distanceRatio * STANDART_GAME_FOV / CameraManager::get().fov;
        ImGui::GetBackgroundDrawList()->AddCircle(
            orbScreenPosition,
            circleSize,
            ImGui::ColorConvertFloat4ToU32(_settings.circleColor), 
            0, 
            0
        );

        ImGui::GetBackgroundDrawList()->AddCircleFilled(
            orbScreenPosition,
            circleSize,
            ImGui::ColorConvertFloat4ToU32(_settings.fillingColor)
        );
    }

private:
    const Config::ESPSettings::OrbRendererSettings& _settings;
};



class ESP : public Cheat {
public:
    ESP(const Config::ESPSettings& settings) :
        Cheat(settings)
    {
        ESPRenderers[EntityType::PlayerEnt] = std::make_shared<ESPRenderer<Player>>(settings.players);
        ESPRenderers[EntityType::OrbEnt] = std::make_shared<ESPRenderer<XpOrb>>(settings.orbs);
        ESPRenderers[EntityType::TrooperEnt] = std::make_shared<ESPRenderer<BaseEntity>>(settings.troopers);
    }

private:
    void _Tick() override {
        for (const auto& [type, renderer] : ESPRenderers) {
            for (const auto& ent : EntitySystem::get()[type]) {
                if (EntitySystem::get().localPlayer->GetWorldPosition(BoneType::Origin).DistanceTo(ent->GetWorldPosition(BoneType::Origin)) >= _settings.maxDistance) {
                    continue;
                }

                renderer->Render(ent);
            }
        }
    }

private:
    std::unordered_map<EntityType, std::shared_ptr<ESPRendererBase>> ESPRenderers;
};
