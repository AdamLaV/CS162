#include <iostream>
#include <iomanip>
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

// getProgramCounter Method
int LittlePersonComputer::getProgramCounter() {
    return programCounter;
}

// getAccumulator Method
int LittlePersonComputer::getAccumulator() {
    return accumulator;
}

// getCurrentInstruction Method
int LittlePersonComputer::getCurrentInstruction(){
    return memory[programCounter];
}

// loadProgram Method
void LittlePersonComputer::loadProgram(int instructions[], int numberOfInstructions){
    for(int i = 0; i < numberOfInstructions; i++) {
        memory[i] = instructions[i];
    }
}

// printState Method
void LittlePersonComputer::printState(){
    cout << "Accumulator : " << accumulator << setw(20) << "Program Counter : " << programCounter << "\n"
         << "Memory: "<< endl;

    for(int i = 0; i < MEMORYSIZE; i++) {
        cout << i << "      ";
    }
    cout << "\n";

    for(int i = 0; i < MEMORYSIZE; i++){
       cout << memory[i] << "      ";
    }
    cout << endl;

}

// isHalted Method
bool LittlePersonComputer::isHalted(){
    return true;
}
