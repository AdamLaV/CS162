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
     * @brief RangedWeapon
     * @param name
     * @param damageValue
     * @param rangeValue
     * @param ammoValue
     * @param cost
     */
    RangedWeapon(string name, int damageValue, int rangeValue, int ammoValue, int cost);

};


#endif // RANGEDWEAPON_H
