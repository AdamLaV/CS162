/**
  * @brief Assignment 3 - Functions
  * @author Daidemang Francis
  */
#include <iostream>
#include <string>
using namespace std;
#include "Location.h"

//default constructor
Location::Location() {
    this->name = "?";
    this->visited = false;
    this->exit = false;

    for(size_t i = 0; i < 4; i++) {
        neighbors[i] = nullptr;
    }
}

// constructor with two parameters
Location::Location(string locName, bool isTheExit) {
    this->name = locName;
    this->exit = isTheExit;
    this->visited = false;

    for(size_t i = 0; i < 4; i++) {
        neighbors[i] = nullptr;
    }
}

// member functions
// getName
string Location::getName() {
    return this->name;
}

// getDescription
string Location::getDescription() {
    string description = getName() + ". ";
    if(visited)
        description += "You have been here before. ";
    description += "Exits:";
    if(neighbors[NORTH] != nullptr)
        description += " north";
    if(neighbors[EAST] != nullptr)
        description += " east";
    if(neighbors[SOUTH] != nullptr)
        description += " south";
    if(neighbors[WEST] != nullptr)
        description += " west";
    description += ".";
    return description;
}

// hasNeighbor
bool Location::hasNeighbor(Direction dir) {
    if(neighbors[dir] != nullptr)
        return true;
    else
        return false;
}

// getNeighbor
Location* Location::getNeighbor(Direction dir) {
    return neighbors[dir];
}

// setNeighbor
void Location::setNeighbor(Direction dir, Location* neighborLoc){
    neighbors[dir] = neighborLoc;
}

// isExit
bool Location::isExit(){
    return exit;
}

// visit
void Location::visit(){
    visited = true;
}

// isVisited
bool Location::isVisited(){
    return visited;
}
