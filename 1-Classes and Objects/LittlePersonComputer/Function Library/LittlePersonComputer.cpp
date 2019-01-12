/**
  * @brief Assignment 1
  * @author Daidemang Francis
*/

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

// getMemoryAt Method
int LittlePersonComputer::getMemoryAt(int location){
    return memory[location];
}

// loadProgram Method
void LittlePersonComputer::loadProgram(int instructions[], int numberOfInstructions){
    for(int i = 0; i < numberOfInstructions; i++) {
        memory[i] = instructions[i];
    }

    //programCounter = 0;
    accumulator = memory[0];
}

// printState Method
void LittlePersonComputer::printState(){
    cout << "Accumulator : " << accumulator << setw(20) << "Program Counter : " << programCounter << "\n"
         << "Memory: "<< endl;

    for (int i = 0; i < MEMORYSIZE; i++){
        cout << i << setw(4);
    }

    cout<<"\n";

    for(int i = 0; i < MEMORYSIZE; i++){
        cout << memory[i] << setw(4);
    }

    cout << endl;
}

// isHalted Method
bool LittlePersonComputer::isHalted(){
    int currentStats = programCounter;
    if (memory[currentStats] == 0){
        return true;
    }
    else{
        return false;
    }
}

// step Method
void LittlePersonComputer::step(){
    while(((!memory[programCounter]) == 000) && (memory[programCounter] > 100)){
        int currentInstruction = memory[programCounter];

         // add
        if (currentInstruction - 100 < 100){
            accumulator = accumulator + memory[(currentInstruction - 100)];
        }

        // subtract
        else if (currentInstruction >= 200 && currentInstruction < 220){
                accumulator = accumulator - memory[(currentInstruction - 200)];

        }

        // store
        else if (currentInstruction >= 300 && currentInstruction < 320){
            memory[currentInstruction - 300] = accumulator;

        }

        // load
        else if (currentInstruction >= 500 && currentInstruction < 520){
            accumulator = memory[currentInstruction - 500];

        }

        // branch aways
        else if (currentInstruction >= 600 && currentInstruction < 620){
            programCounter = currentInstruction - 601;
            currentInstruction = memory[currentInstruction - 600];

        }

        // branch if 0
        else if (currentInstruction >= 700 && currentInstruction < 720){
            if(accumulator == 0){
                programCounter = currentInstruction - 701;
                currentInstruction = memory[currentInstruction - 700];

            }

        }

        // branch if >= 0 
        else if (currentInstruction >= 800 && currentInstruction < 820){
            if(accumulator >= 0){
                programCounter = currentInstruction - 801;
                currentInstruction = memory[currentInstruction - 800];
            }
        }

        // input
        else if (currentInstruction == 901){
            cout<<"enter input: " << endl;
            int input;
            cin >> input;
            accumulator = input;
        }

        // output
        else if (currentInstruction == 902) {
            cout <<"Output: "<< accumulator << endl;
        }

        programCounter++;
    }
}
