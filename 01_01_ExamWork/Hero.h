#pragma once
#include "Unit.h"

enum ToolsLevel { NONE, WOODEN, STONE, COPPER, IRON, GOLD, DIAMOND };

class Hero: Unit {
	struct Resources {
        int wood = 0;
        int planks = 0;
        int cobblestone = 0;
        int coal = 0;
        int copper_ore = 0;
        int copper = 0;
        int iron_ore = 0;
        int iron = 0;
        int gold_ore = 0;
        int gold = 0;
        int diamonds = 0;
        // Resources() {}
	};
    struct Inventory {
        ToolsLevel Sword = NONE;
        ToolsLevel Pickaxe = NONE;
        ToolsLevel Axe = NONE;
        // Inventory() {}
    };

	int coins;
    Resources resources;
    Inventory inventory;

public:
    Hero(): coins(0), resources(0,0,0,0,0,0,0,0,0,0,0), inventory(NONE, NONE, NONE) {}
    Hero(int c): coins(c), resources(0,0,0,0,0,0,0,0,0,0,0), inventory(NONE, NONE, NONE) {}

};

