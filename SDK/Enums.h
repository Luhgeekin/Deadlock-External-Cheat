#pragma once

enum BoneType : int {
    Origin = 0,
    Head = 1,
    Body = 2
};

enum class EntityType {
    PlayerEnt,
    TrooperEnt,
    OrbEnt,
    UnknownEnt
};