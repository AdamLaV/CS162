#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    // normal varibles
    int count1 = 5, count2 = 10;
    char letter = 'A';

    // pointer variable
    int* pCount1;
    int* pCount2;
    char* pLetter;

    //cout << pCount << "  " << pCount2 << endl;

    // assiging address of normal variable to pointers
    pCount = &count;
    pCount2 = &count2;
    pLetter = &letter;

    cout << count << " is at location " << pCount << "\n"
         << count2 << " is at location " << pCount2 << "\n"
         << letter << " is at location " << pLetter << endl;
}

// Aggregation

