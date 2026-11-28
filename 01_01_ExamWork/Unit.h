#pragma once
#include <iostream>
#include <string>


class Unit {

	string name;
	int hp;
    int stamina;

public:
    Unit(): name("No name"), hp(0), stamina(0) {}

    virtual void attack() = 0;
    virtual void takeDamage() = 0;
};
