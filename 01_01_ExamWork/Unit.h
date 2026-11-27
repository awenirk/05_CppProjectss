#pragma once
#include <iostream>
#include <string>
using namespace std;

class Unit {
	string name;
	int hp;

public:
    Unit(): name("No name"), hp(0) {}

    virtual void takeDamage() = 0;
};
