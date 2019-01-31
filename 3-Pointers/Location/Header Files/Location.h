/**
  * @brief Assignment 3 - Header
  * @author Daidemang Francis
  */
#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
using namespace std;

enum Direction {
    NORTH, EAST, SOUTH, WEST
};

/**
 * @brief The Location class represenst a location in the game. Ecah location can be connected
 * to up to 4 other locations (North, South, East and West).
 */
class Location {
public:
    /**
     * @brief Location default constructor
     */
    Location();

    /**
     * @brief Location constructor with two parameters
     * @param locName
     * @param isTheExit
     */
    Location(string locName, bool isTheExit);

    /**
     * @brief getName
     * @return returns name of the location
     */
    string getName();

    /**
     * @brief getDescription
     * @return returns a string containing the name of the location,
     * a list of the directions you can leave in and if it has been visited
     */
    string getDescription();

    /**
     * @brief hasNeighbor
     * @param dir
     * @return returns  true if there is another location in the specified direction,
     * false if there is not a neighbor
     */
    bool hasNeighbor(Direction dir);

    /**
     * @brief getNeighbor
     * @param dir
     * @return returns a pointer to the neighbor in the indicated direction
     * or nullptr if there is not a neighbor
     */
    Location* getNeighbor(Direction dir);

    /**
     * @brief isExit
     * @return returns true if this Location is an exit
     */

    /**
     * @brief setNeighbor stores the indicated location pointer as
     * the designated neighbor
     * @param dir
     * @param neighborLoc
     */
    void setNeighbor(Direction dir, Location *neighborLoc);

    /**
     * @brief isExit
     * @return returns true if the location is an exit
     */
    bool isExit();

    /**
     * @brief visit marks a room as having been visited
     */
    void visit();

    /**
     * @brief isVisited
     * @return returns true if a room has been visited
     */
    bool isVisited();

private:
    string name;
    bool visited;
    bool exit;
    Location* neighbors[4];
};

#endif // LOCATION_H
