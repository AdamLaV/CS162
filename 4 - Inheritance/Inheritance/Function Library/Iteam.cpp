#include <iostream>
#include <string>
using namespace std;
#include "Item.h"

// toString method
string Item::toString() {
    string returnValue = this->name + " (value: " + to_string(this->value) + ")";
    return returnValue;
}

// Iteam defult class state
Item::Item(string name, int cost) {
    this->name = name;
    this->value = cost;
}

// getName method
string Item::getName() {
    return this->name;
}

// getValue method
int Item::getValue() {
    return this->value;
}
