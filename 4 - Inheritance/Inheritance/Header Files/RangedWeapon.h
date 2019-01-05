#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H
#include "Item.h"
#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief The RangedWeapon class represents a weapon which can attack at a longer range
 * but limited on amor
 */
class RangedWeapon: public Weapon, public Item {
public:

    /**
     * @brief RangedWeapon default constructor
     * @param name of weapon
     * @param damageValue of weapon
     * @param rangeValue of weapon
     * @param ammoValue for weapon
     * @param cost of the weapon
     */
    RangedWeapon(string name, int damageValue, int rangeValue, int ammoValue, int cost);

    /**
     * @brief toString
     * @return returns a string format that represents RangedWeapon
     */
    virtual string toString();

    /**
     * @brief getRange
     * @return
     */
    virtual int getRange();

};


#endif // RANGEDWEAPON_H
