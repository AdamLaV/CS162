/**
  * @brief Assignment 3
  * @author Daidemang Francis
  */
#include <iostream>
#include <cstdlib>
#include "Location.h"
using namespace std;

const int NUM_LOCATIONS = 8;

void buildMap(Location allLocations[]){
    allLocations[0] = Location("a deep, dark cave", false);
    allLocations[1] = Location("a musty passage", false);
    allLocations[2] = Location("a twisting shaft", false);
    allLocations[3] = Location("a dusty alcove", false);
    allLocations[4] = Location("a collapsed cavern", false);
    allLocations[5] = Location("the shores of an underground lake", false);
    allLocations[6] = Location("a passage to the surface", false);
    allLocations[7] = Location("the surface", true);

    allLocations[0].setNeighbor(NORTH, &allLocations[1]);
    allLocations[0].setNeighbor(EAST, &allLocations[5]);
    allLocations[0].setNeighbor(SOUTH, &allLocations[4]);

    allLocations[1].setNeighbor(EAST, &allLocations[2]);
    allLocations[1].setNeighbor(SOUTH, &allLocations[0]);

    allLocations[2].setNeighbor(EAST, &allLocations[3]);
    allLocations[2].setNeighbor(SOUTH, &allLocations[5]);
    allLocations[3].setNeighbor(SOUTH, &allLocations[6]);

    allLocations[4].setNeighbor(NORTH, &allLocations[0]);

    allLocations[5].setNeighbor(NORTH, &allLocations[2]);
    allLocations[5].setNeighbor(WEST, &allLocations[0]);
    allLocations[6].setNeighbor(NORTH, &allLocations[3]);
    allLocations[6].setNeighbor(WEST, &allLocations[7]);

}

int main(){
    Location allLocations[NUM_LOCATIONS];
    buildMap(allLocations);

    Location *currentLocation = &allLocations[0];
    char userInput;
    Direction dir;
    while(!currentLocation->isExit()){
        cout << currentLocation->getDescription() << endl;
        currentLocation->visit();
        cout << "Enter direction (N S E W): ";
        cin >> userInput;
        userInput = toupper(userInput);
        if(userInput == 'N' || userInput == 'E' || userInput == 'S' || userInput == 'W'){
            if(userInput == 'N')
                dir = NORTH;
            else if(userInput == 'S')
                dir = SOUTH;
            else if(userInput == 'E')
                dir = EAST;
            else
                dir = WEST;

            if(currentLocation->hasNeighbor(dir))
                currentLocation = currentLocation->getNeighbor(dir);
            else{
                cout << "Not an exit (" << userInput << ")" << endl;
            }
        }
        else
            cout << userInput << " is invalid!" << endl;

        cout << endl;
        if(currentLocation->isExit() == true) {
            cout << "You emerge safely from the maze!" << endl;
        }
    }
}
