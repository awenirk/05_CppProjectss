#pragma once
#include "Unit.h"
#include "Resource.h"

class Enemy: public Unit {
    int moneyReward;
    Resources dropResource;
    int resourceDropChance;
    
public:

    void getCoins() {}
    void rollDrop() {}
    /*
    Item Slots::randomChar() {
        int temp = 1 + rand() % 100;
        Item item = CHERRY;
        if (temp > 0 && temp <= 45) item = CHERRY;
        else if (temp > 45 && temp <= 75) item = LEMON;
        else if (temp > 75 && temp <= 91) item = BAR;
        else if (temp > 91 && temp <= 98) item = DIAMOND;
        else if (temp > 98 && temp <= 100) item = SEVEN;
        return item;
    }
    */

    void attack()override {}
    void takeDamage()override {}

};

