#include <iostream>
#include <string>
using namespace std;

#include "Weapon.h"

// default constructor
Weapon::Weapon(string name, int damageValue, int cost) : Item(name, cost) {
    this->damage = damageValue;
}

int Weapon::getDamage() {
    return this->damage;
}

// toString method
string Weapon::toString() {
    return this->getName() + " (value: " + to_string(this->getValue()) + ") Damage: " + to_string(this->getDamage());
}

// getRange Method
int Weapon::getRange() {
    return 0;
}

// use method
int Weapon::use(int rangeToTarget) {
    int range = getRange();
    int damageDone = 0;
    if(rangeToTarget < range) {
        damageDone = getDamage();
    }
    else if (rangeToTarget >= range) {
        damageDone = getDamage();
        damageDone -= rangeToTarget;
        if(damageDone < 0) damageDone = 0;
    }

    return damageDone;
}
