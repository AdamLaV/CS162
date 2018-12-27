#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Page.h"

// default constructor
Page::Page() {
    this->url = "";
    this->visits = 0;
    this->usedLinks = 0;

    for(size_t i = 0; i < LINKSIZE; i++) {
        links[i] = nullptr;
    }
}

// constructor with one argument
Page::Page(string urlValue) {
    this->url = urlValue;
    this->visits = 0;
    this->usedLinks = 0;

    for(size_t i = 0; i < LINKSIZE; i++) {
        links[i] = nullptr;
    }
}

// getURL method
string Page::getURL() {
    return this->url;
}

// getNumLinks method
int Page::getNumLinks() {
    return this->usedLinks;
}

// addLink method
void Page::addLink(Page *other) {
    for(size_t i = 0; i < LINKSIZE; i++) {
        if(links[i] == nullptr) {
            links[i] = other;
            usedLinks++;
            break;
        }
    }
}

// getRandomLink method
Page* Page::getRandomLink() {
    srand(time(NULL));
    int RandIndex = rand() % 3;

    Page* randomAddress = links[RandIndex];
    return randomAddress;
}

