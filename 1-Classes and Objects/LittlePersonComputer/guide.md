# Assignment Instructions

## Submit files: LittlePersonComputer.h / LittlePersonComputer.cpp

## For this assignment, you are going to implement a version of the Little Man Computer (if you did not take

## CS160 here, you can see demonstrations/read more about it here if the description below is too brief.) It

## is a computer with one general purpose register - the accumulator - and a limited vocabulary of machine

## instructions represented as integers. Your class will store an array representing the main memory of the

## computer as well as maintaining the accumulator value and a program counter to track where in the

## program we are (PC always will store number of NEXT memory instruction to run).

## Implement the class LittlePersonComputer shown below. Write a .h and a .cpp with the appropriate parts

## of your code. You should submit files called LittlePersonComputer.h and LittlePersonComputer.cpp. The

## UML diagram below shows exactly what you are implementing.

## The LittlePersonComputer.h file should have Doxygen comments for the class and for each public

## Here are what the various methods should do:

## LittlePersonComputer() : initializes accumulator (ACC), program counter (PC) and all memory slots to 0.

## Hint: There is NO magic way to initialize all elements of an array to 0 with one statement inside the

## constructor.

## LittlePersonComputer(int instructions[], int numberOfInstructions) : initializes accumulator, program

## counter to 0. The instruction from the array provided should be copied into the LPC’s memory

## array and any extra slots of memory initialized to 0.

## (Do not have to worry about getting more than 20 instructions... see the appendix for how to add

## an assertion if you want to make sure you don't work with bad data.)

## int getProgramCounter() : return the current value of program counter

## int getAccumulator() : return the current value of accumulator

## int getCurrentInstruction() : return the next instruction to be run (the memory location indicated by the

## program counter)

## int getMemoryAt(int location) : return the value in memory at the indicated location

## void loadProgram(int instructions[], int numberOfInstructions) : the instruction array provided should

## be copied into the memory array starting at index 0. All memory past the end of the instructions

## should be set to 0.

## void printState() : print the current state of the computer as something like:

## Accumulator : 20 Program Counter : 2

## Memory:

## 0 1 2 3 4 5 ... 19

## 504 104 902 0 10 0 ... 0

## bool isHalted() : return true if the current instruction is 0, otherwise false

## void step () : run the next instruction according to the list of machine

## codes shown to the right. A couple of hints about how things

## should work:

##  The 100's digit always indicates the basic operation

##  The next two digits specify a memory address (xx) or, for

## 9XX instructions, the IO mode(input/output)

##  input/output should read into or print the accumulator's

## value to/from the console

##  store puts the accumulator value into a memory address

## specified by XX, load copies the value at the memory

## location XX to the ACC

##  add / subtract take the value at a memory address and add to/subtract from the ACC. "104" says

## add the value at memory address 4 to the ACC, NOT add 4 to the ACC.

##  branches (other than 6xx) check the accumulator to make their decision. They either change the

## PC to xx (if condition is true) OR advance the PC by 1 (if condition is false).

##  After running any instruction except a branch, advance the program counter

## continued...

### Build one part at a time.

### Start with the

### constructor and use the

### debugger to check it is

### setting up your object

### correctly.

### Then work on other

### functions one at a time.

### Test them in main as you

### go. See main samples

### below the LMC

### specification.

### Partial credit is

### available... better to turn

### in a program that does

### everything but step, or

### does everything but

### handle branches than to

### not turn it in or turn it in

### late.

### BUT... a program that

### fails to compile is usually

### not worth many points.

### Work in small pieces and

### make sure you maintain

### a version that at least

### works partially.


## Sample main file:

## To test your class, you will need a main method. Make a file main.cpp that includes

## LittlePersonComputer.h. Add a main function that runs simple tests like:

## LittlePersonComputer computer1; //make a computer that is all 0's

## computer1.printState(); //make sure you can print its info

## //test getProgramCounter - expect 0

## cout << computer1.getProgramCounter() << endl;

## //make sure isHalted works - expect 1 right now (

## cout << computer1.isHalted() << endl;

## //Load a program into the computer

## int program[] = { 901, 307, 506, 207, 902, 0 , 10 };

## int programLength = 7;

## computer1.loadProgram(program, programLength);

## //print out to make sure it was loaded

## computer1.printState();

## //check getMemory - should return 506 for memory 2

## cout << "Memory at 2 = " << computer1.getMemoryAt( 2 ) << endl;

## //run one step and check the state

## computer1.step();

## computer1.printState();

## ...

## Once you think you are done, or at least you have all the functions and are trying to test the step function,

## you can use this code to test your LittlePersonComputer:

## main.cpp

## You will NOT turn this file in, you can modify it to do other tests, but if you have to modify it to get it to

## work with your LittlePersonComputer, your program will not work when I test it. Make sure your LPC

## work with the file as is. Note, it is better to compile against all of the code in my main than it is to get step

## working but leave out some of the functions you are supposed to provide.

## Additional Tests:

## Below is code for additional test programs for your LPC. You can use these to make sure the various LPC

## instructions are working as intended. Load them into a LittlePersonComputer object and ask it to run until

## it halts.

```
/*Program that tests input, store and subtract
* Should calculate and print (10 - input)
*
* 0: Get input to ACC
* 1: Store to location 7
* 2: Get location 6 to ACC (load 10)
* 3: Subtract location 7 from ACC (subtracts input)
* 4: Print
* 5: End
* 6: Data Storage (input)
*/
// 0 1 2 3 4 5 6
```
### DO NOT write all the

### functions at once. Start

### with one constructor and

### write that and test that.

### At this point your main

### function should be about

### 2 lines of code!

### Then add one more

### function (like printState)

### and add a line to test it

### in main.

### Then add the next

### function (like

### getProgramCounter) and

### add code to main to test

### it.

### Keep adding functions

### until you are done.


int program2[] = { 901 , 307 , 506 , 207 , 902 , 0 , 10 };
int program2Length = 7 ;
/*Program that tests branch statement
* Should ask for input. If input is 0, prints 1. For any other value, prints 0.
*
* 0: Get input to ACC
* 1: If ACC is 0, set PC to 4 to jump ahead
* 2: Load value from 7 into ACC (load 0 )
* 3: Set PC to 5 to jump ahead
* 4: Load value from 8 into ACC (load 1 )
* 5: Print
* 6: End
* 7: Data Storage (0)
* 8: Data Storage (1)
*/
// 0 1 2 3 4 5 6 7 8
int program3[] = { 901 , 704 , 507 , 605 , 508 , 902 , 000 , 0 , 1 };
int program3Length = 9 ;
//Note : you can test 8XX instruction by changing instruction 1 to 804
//New expected output is 1 for any input >= 0, 0 for any negative input
/*Program that tests branch statements in loop
* Should count down from 10 to 1
*
* 0: Load 10 to ACC
* 1: Print current value
* 2: Subtract value from location 7 (subtract 1)
* 3: If ACC is now 0, set PC to instruction 5
* 4: Set PC to instruction 1
* 5: End
* 6: Data Storage (10)
* 7: Data Storage (1)
*/
// 0 1 2 3 4 5 6 7
int program4[] = { 506 , 902 , 207 , 705 , 601 , 0 , 10 , 1 };
int program4Length = 8 ;


