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

// toString method
string RangedWeapon::toString() {
    return this->getName() + " (value: " + to_string(this->getValue()) +
            ") Damage: " + to_string(this->getDamage()) + " Ammo: " +
            to_string(this->getAmmo()) + " Range: " + to_string(this->getRange());
}

// getRange method
int RangedWeapon::getRange() {
    return this->range;
}

// getAmmo method
int RangedWeapon::getAmmo() {
    return this->ammo;
}

// use method
int RangedWeapon::use(int rangeToTarget) {
    // get ammo status and compute findings
    int damageDone = getDamage();
    int myDamage = 0;
    if(rangeToTarget <= getRange() && ammo > 0) {
        this->ammo--;
        myDamage = damageDone;
    }

    else if (rangeToTarget > getRange() && ammo > 0) {
        this->ammo--;
        myDamage = 0;
    }

    else {
        myDamage = 0;
    }

    return myDamage;
}
