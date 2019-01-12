/**
  * @brief Assignment 1
  * @author Daidemang Francis
*/

#include <iostream>
#include "LittlePersonComputer.h"
using namespace std;

int main()
{
    LittlePersonComputer computer1;

    computer1.printState();

    //cout << computer1.getProgramCounter() << endl;

    //cout << computer1.isHalted() << endl;

    int program[] = { 901, 307, 506, 207, 902, 0 , 10 };
    int programLength = 7;
    computer1.loadProgram(program, programLength);

    computer1.printState();

    cout << "Memory at 2 = " <<
    computer1.getMemoryAt(2)<< endl;

    computer1.step();
    computer1.printState();
}
