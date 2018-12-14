#include <iostream>

using namespace std;

int main()
{
    // normal varibles
    int count = 5, count2 = 10;

    // pointer variable
    int* pCount;
    int* pCount2;

    // assiging address of normal variable to pointers
    pCount = &count;
    pCount2 = &count2;

    cout << count << " is at location " << pCount << " \n"
         << count2 << " is at location " << pCount2 << endl;
}


