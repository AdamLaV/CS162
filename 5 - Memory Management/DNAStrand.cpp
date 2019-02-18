#include <iostream>
using namespace std;

#include "DNAStrand.h"

// basic constructor
DNAStrand::DNAStrand(const char* startingString) {
    for(unsigned int i = 0; startingString[i] != '\0'; i++) {
        if(startingString[i] != 'A' && startingString[i] != 'C' && startingString[i] != 'G' && startingString[i] != 'T') {
            throw logic_error("logic error");
        }
    }

    this->length = strlen(startingString);
    this->bases = new char[length];
    strcpy(bases,startingString);
}

// member function getLength
int DNAStrand::getLength() const {
    return this->length;
}

// == operator
bool DNAStrand::operator==(const DNAStrand &other) const {
    if(this->length != other.length) {
        return false;
    }

    for(int i = 0; i < length; i++) {
        if(this->bases[i] != other.bases[i])
            return false;
    }

    return true;
}

// destructor
DNAStrand::~DNAStrand() {
    if(bases != nullptr) {
        delete[] bases;
    }

    bases = nullptr;
}

// copy constructor
DNAStrand::DNAStrand(const DNAStrand &other) {
    this->length = other.length;
    this->bases = new char[length];
    strcpy(bases,other.bases);
}

// assignment operator
DNAStrand& DNAStrand::operator=(const DNAStrand& other) {
    if(this != &other) {
        this->length = other.length;
        this->bases = new char[length];
        strcpy(bases,other.bases);
    }
    return *this;
}

// private constructor
DNAStrand::DNAStrand(int length) {
    this->length = length;
    this->bases = new char[length];
}

// + operator
DNAStrand DNAStrand::operator+(const DNAStrand &other) const {
    DNAStrand TwoDNAStrands(this->length + other.length);
    strcpy(TwoDNAStrands.bases, bases);
    strcat(TwoDNAStrands.bases, other.bases);
    return TwoDNAStrands;
}

// error here cdoe below needs work
// reverse member function
DNAStrand DNAStrand::reverse() const {
    DNAStrand reversed(length);
    for(int i = 0; i <= reversed.getLength(); i++) {
        reversed.bases[i] = bases[length-1 - i];
    }
    return reversed;
}

// getComplement member function
DNAStrand DNAStrand::getComplement() const {
    DNAStrand complement(length);
    for(int i = 0;i < length; i++) {
        // A's becomes T
        if(bases[i] == 'A')
            complement.bases[i] = 'T';

        // T's becomes A
        else if(bases[i] == 'T')
            complement.bases[i] = 'A';

        // C's becomes G
        else if(bases[i] == 'C')
            complement.bases[i] = 'G';

        // G's becoems C
        else
            complement.bases[i] = 'C';
    }
    return complement;
}

// [] operator
char DNAStrand::operator [](int index) const {
    if(index < 0 || index >= length) {
        throw std::out_of_range("out_of_range");
    }

    return bases[index];
}

// DNAStrand's friend << operator
std::ostream& operator<<(std::ostream& dest, const DNAStrand& source) {
   dest<<source.bases;
   return dest;
}

// memebr function substr
DNAStrand DNAStrand::substr(int start, int length) const {
    if(start < 0 || length < 0 || (start+length) > this->length) {
        throw std::out_of_range("out_of_range");
    }
    DNAStrand DNAstrand(length);

    for(int i = 0; i < length; i++) {
        DNAstrand.bases[i] = bases[start + i];
    }

    return DNAstrand;
}

// error here cdoe below needs work
// member function findFirstCopyOf
int DNAStrand::findFirstCopyOf(const DNAStrand &other) const {
    int location = 0;
    for(int i = 0; i < other.getLength(); i++) {
        if(other[i] == this->bases[i]) {
            location = i;
        }
        else {
            location = -1;
        }
    }
    return location;
}

