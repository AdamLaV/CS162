#include <iostream>
#include <cmath>
using namespace std;

#include "Point.h"
#include "Rectangle.h"


// rectangle constructor
Rectangle::Rectangle(Point& p1, double heightValue, double widthValue) {
    upperLeftVertex = p1;
    height = heightValue;
    width = widthValue;
}

// rectangle constructor
Rectangle::Rectangle(Point& p1, Point& p2) {
    upperLeftVertex = p1;
    height = abs(p1.getY() - p2.getY());
    width = abs(p1.getX() - p2.getX());
}

// getUpperLeftVertex method
Point Rectangle::getUpperLeftVertex()const {
    return upperLeftVertex;
}

// getWidth method
Rectangle::getWidth()const {
    return width;
}

// getHeight method
Rectangle::getHeight()const {
    return height;
}

