#pragma once
#include "Unit.h"
#include "Resource.h"

class Enemy: public Unit {
    int moneyReward;
    Resources dropResource;
    int resourceDropChance;
    
public:

    void getCoint() {}
    void rollDrop() {}

    void atack() {}
    void takeDamage() {}
};

