#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H
#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief The RangedWeapon class represents a weapon which can attack at a longer range
 * but limited on amor
 */
class RangedWeapon: public Weapon {
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
     * @return returns the range value
     */
    virtual int getRange();

    /**
     * @brief getAmmor
     * @return returns ammor for weapon
     */
    int getAmmo();

    /**
     * @brief use check if there is ammor available (more than 0) then take one.
     * @param rangeToTarget determines how much damage is done
     * @return returns damage an attack will do
     */
    virtual int use(int rangeToTarget);

private:
    int range;
    int ammo;

};


#endif // RANGEDWEAPON_H
