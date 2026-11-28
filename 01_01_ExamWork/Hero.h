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
    int furnaceLvl = 0;

public:
    Hero(): coins(0), resources(), inventory(), furnaceLvl() {}
    Hero(int c): coins(c), resources(), inventory(), furnaceLvl() {}

    void attack()override {}
    void takeDamage()override {}

};

