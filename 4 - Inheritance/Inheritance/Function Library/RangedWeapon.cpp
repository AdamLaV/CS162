#include <iostream>
#include <string>
using namespace std;
#include "RangedWeapon.h"

// default constructor
RangedWeapon::RangedWeapon(string name, int damageValue, int rangeValue, int ammoValue, int cost)
    : Weapon(name, damageValue, cost) {
    this->range = rangeValue;
    this->ammo = ammoValue;
}
