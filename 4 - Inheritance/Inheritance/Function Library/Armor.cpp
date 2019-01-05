#include <iostream>
#include <string>
using namespace std;

#include "Armor.h"

// Armor default constructor
Armor::Armor(const string& name, int protectionValue, int cost) :Item(name, cost) {
    this->protection = protectionValue;
}

// toString method
string Armor::toString() {
    return this->getName() + " (value: " + to_string(this->getValue()) + ") Protection: " + to_string(this->getProtection());
}

// getProtection method
int Armor::getProtection() {
    return this->protection;
}
