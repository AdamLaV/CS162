#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;

#include "Item.h"

class Weapon: public Item {
public:

    /**
     * @brief Weapon default constructor
     * @param name of weapon
     * @param damageValue of weapon
     * @param cost of the weapon
     */
    Weapon(string name, int damageValue, int cost);

    /**
     * @brief toString
     * @return returns a string format describing weapon
     */
    virtual string toString();

    /**
     * @brief getDamage
     * @return returns damage value
     */
    int getDamage();

    /**
     * @brief getRange
     * @return returns the range value
     */
    virtual int getRange();

    /**
     * @brief use if target is out of range damage is done, else no damage
     * @param rangeToTarget
     * @return returns damage an attack will do
     */
    virtual int use(int rangeToTarget);

private:
    int damage;
};

#endif // WEAPON_H
