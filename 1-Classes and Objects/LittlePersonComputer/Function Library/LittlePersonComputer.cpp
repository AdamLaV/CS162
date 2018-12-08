#include <iostream>
#include "LittlePersonComputer.h"
using namespace std;

// defult class state
LittlePersonComputer::LittlePersonComputer(){
    for(int i = 0; i < MEMORYSIZE; i++) {
        memory[i] = 0;
    }
    accumulator = 0;
    programCounter = 0;
}

// initialized class state
LittlePersonComputer::LittlePersonComputer(int instructions[], int numberOfInstructions){
    accumulator = 0;
    programCounter = 0;

    for(int i = 0; i < numberOfInstructions; i++){
        memory[i] = instructions[i];
    }

}
