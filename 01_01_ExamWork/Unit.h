#pragma once
#include <iostream>
#include <string>
using namespace std;

class Unit {
	string name;
	int hp;
	int maxHp;
    int stamina;
    int maxsSamina;

public:
    Unit(): name("No name"), hp(0), maxHp(0), stamina(0), maxsSamina(0) {}
    Unit(string n, int h, int mh, int s, int ms): name(n), hp(h), maxHp(mh), stamina(s), maxsSamina(ms) {}

    virtual void attack() = 0;
    virtual void takeDamage(int d) {

    }
};
