#include <iostream>
#include <string>
using namespace std;

// a class is anew datatype / a blueprint for a new datatype
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl;

    return 0;
}

// What is an boject? -- Bicycle 
// Has Attributes -- color: black
//                 -- brand: Globe
//                 -- price: $50


// Has Behaviors 
//          -- peddle()
//          -- break()
//          -- chnageGears()
