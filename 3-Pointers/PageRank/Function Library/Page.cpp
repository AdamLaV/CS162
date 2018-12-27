#include <iostream>
using namespace std;
#include "Page.h"

// default constructor
Page::Page() {
    this->url = "";
    this->visits = 0;
    this->usedLinks = 0;

    for(size_t i = 0; i < 3; i++) {
        links[i] = nullptr;
    }
}

// constructor with one argument
Page::Page(string urlValue) {
    this->url = urlValue;
    this->visits = 0;
    this->usedLinks = 0;

    for(size_t i = 0; i < 3; i++) {
        links[i] = nullptr;
    }
}

