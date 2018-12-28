/**
  * @brief Assignment 3
  * @author Daidemang Francis
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Page.h"
using namespace std;

int main()
{
    // group of 4 pages
    Page page1, page2, page3, page4;

    // page one
    page1 = Page("htp://page1");
    page1.addLink(&page2);
    page1.addLink(&page3);

    // page two
    page2 = Page("htp://page2");
    page2.addLink(&page3);

    // page three
    page3 = Page("htp://page3");
    page3.addLink(&page1);

    // page four
    page4 = Page("htp://page4");
    page4.addLink(&page1);
    page4.addLink(&page3);


    cout << page1.getURL() << "\n" << page1.getNumLinks()
         << "\n" << page1.getNumVisits() << endl;
}
