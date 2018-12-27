#ifndef PAGE_H
#define PAGE_H
#include <iostream>
using namespace std;

/**
 * @brief The Page class represent a web page
 * Each page keep track of its name (url)
 * The number of time it has been visited (starts at 0)
 * How many pages it links to (usedLinks) &
 * A list of up to 3 other pages it links to (links array)
 */
class Page {
public:

    /**
     * @brief Page constructor set url to "",
     * both ints to 0 and all links to nullptr
     */
    Page();

    /**
     * @brief Page Constructor, same as above except, url is set
     * to indicated valu
     * @param urlValue vale to set url to
     */
    Page(string urlValue);

    /**
     * @brief getURL get page URL
     * @return return page URL
     */
    string getURL();

    /**
     * @brief getNumLinks get number of unsed links
     * @return return the number of used links
     */
    int getNumLinks();

    /**
     * @brief addLink store given pointer into the links array
     * at the next avaailable location and increment the number of usedLinks
     * @param Other given pointer to store into array
     */
    void addLink(Page* Other);

    /**
     * @brief getRandomLink set a random address from the links the page has
     * @return return random address link
     */
    Page* getRandomLink();

    /**
     * @brief visit add one to the number of visits this page has seen
     */
    void visit();

    /**
     * @brief getNumVisit
     * @return return the number of visit for this page
     */
    int getNumVisit();

private:
    string url;
    int visits;
    Page* links[3];
    int usedLinks;

};

#endif // PAGE_H
