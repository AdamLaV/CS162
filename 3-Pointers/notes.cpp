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

// Aggregation Example 

//-------------------------------------------------------------------------------------------------
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
	
#include <string>
#include <iostream>
 
class Teacher
{
private:
    std::string m_name;
 
public:
    Teacher(std::string name)
        : m_name(name)
    {
    }
 
    std::string getName() { return m_name; }
};
 
class Department
{
private:
    Teacher *m_teacher; // This dept holds only one teacher for simplicity, but it could hold many teachers
 
public:
    Department(Teacher *teacher = nullptr)
        : m_teacher(teacher)
    {
    }
};
 
int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *teacher = new Teacher("Bob"); // create a teacher
    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.
        Department dept(teacher);
 
    } // dept goes out of scope here and is destroyed
 
    // Teacher still exists here because dept did not delete m_teacher
 
    std::cout << teacher->getName() << " still exists!";
 
    delete teacher;
 
    return 0;
}



