#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief The Item class represents anything a Character can carry
 */
class Item {
public:
    /**
     * @brief Item default constructor, takes in a string and an integer as parameter
     * @param name string representing the item name
     * @param cost integer representing the item cost
     */
    Item (string name, int cost);

    /**
     * @brief getName get the name of item
     * @return return the name of item
     */
    string getName();

    /**
     * @brief getValue get value of item
     * @return return the value
     */
    int getValue();

    /**
     * @brief toString
     * @return return a string format
     */
    virtual string toString();

private:
    string name;
    int value;
};


#endif // ITEM_H
