#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include <string>
using namespace std;

#include "Item.h"

/**
 * @brief The Armor class represents a piece of armor a character can wear
 */
class Armor: public Item {
public:

    /**
     * @brief Armor default constructor
     * @param name is teh name of the armor
     * @param protectionValue is the integer value of the protection
     * @param cost is the cost of the armor
     */
    Armor(const string& name, int protectionValue, int cost);

    /**
     * @brief toString
     * @return returns a string format describing Armor
     */
    virtual string toString();

    /**
     * @brief getProtection
     * @return returns protection value
     */
    int getProtection();
private:
    int protection;
};

#endif // ARMOR_H
