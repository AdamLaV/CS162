/**
  * @brief Assignment 1
  * @author Daidemang Francis
*/

#ifndef LITTLEPERSONCOMPUTER_H
#define LITTLEPERSONCOMPUTER_H
const int MEMORYSIZE = 20;

/**
 * @brief The LittlePersonComputer class definds a computer with one general purpose - the accumulator -
 * and a limited vocabulary of machine instructions represented as integers.
 */
class LittlePersonComputer {
public:

    /**
     * @brief LittlePersonComputer initializes accumulator (ACC), program counter (PC) and all memory
     * slots to 0
     */
    LittlePersonComputer();

    /**
     * @brief LittlePersonComputer initializes accumulator, program counter to 0
     * @param instructions instructions to copy to memory - any extra slots of memory will be set to 0
     * @param numberOfInstructions total numer of instructions to copy
     */
    LittlePersonComputer(int instructions[], int numberOfInstructions);

    /**
     * @brief getProgramCounter
     * @return return the current value of program counter
     */
    int getProgramCounter();

    /**
     * @brief getAccumulator
     * @return retur the current value of accumulator
     */
    int getAccumulator();

    /**
     * @brief getCurrentInstruction
     * @return return the next instruction to be run (the memory location indicated by the program counter)
     */
    int getCurrentInstruction();

    /**
     * @brief getMemoryAt
     * @param location the memory location
     * @return the value of the memory at the indicated location
     */
    int getMemoryAt(int location);

    /**
     * @brief loadProgram load instruction array into the memory starting at location 0
     * @param instructions array of instructions to be added to memory
     * @param numberOfInstructions total number of instructions
     */
    void loadProgram(int instructions[], int numberOfInstructions);

    /**
     * @brief printState print the current state of the computer
     */
    void printState();

    /**
     * @brief stept run the next step accourding to the list of machine codes
     */
    void step();

    /**
     * @brief isHalted
     * @return return true if the current instruction is 0, otherwise false
     */
    bool isHalted();

private:
    int memory[MEMORYSIZE];
    int accumulator;
    int programCounter;
};

#endif // LITTLEPERSONCOMPUTER_H
