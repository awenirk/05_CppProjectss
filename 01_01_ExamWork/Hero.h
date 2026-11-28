#pragma once
#include "Unit.h"
#include "Resource.h"


class Hero: public Unit {
    struct Inventory {
        ToolsLevel Sword = NONE;
        ToolsLevel Pickaxe = NONE;
        ToolsLevel Axe = NONE;
        // Inventory() {}
    };

	int coins;
    Resources resources;
    Inventory inventory;

    int FurnaceLvl;

public:
    Hero(): coins(0), resources(), inventory(NONE, NONE, NONE) {}
    Hero(int c): coins(c), resources(), inventory(NONE, NONE, NONE) {}

    void atack() {}
    void takeDamage() {}
};

