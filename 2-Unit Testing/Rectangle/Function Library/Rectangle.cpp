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

// Member functions definitions
// getUpperLeftVertex
Point Rectangle::getUpperLeftVertex()const {
    return upperLeftVertex;
}

// getWidth
double Rectangle::getWidth()const {
    return width;
}

// getHeight
double Rectangle::getHeight()const {
    return height;
}

// getArea
double Rectangle::getArea() {
    return width * height;
}

// getPerimeter
double Rectangle::getPerimeter() {
    return (width + height) * 2;
}

// getCenter
Point Rectangle::getCenter() {
    double xCenter = getX() + getWidth() / 2;
    double yCenter = getY() + getHeight() / 2;

    Point newPoint(xCenter, yCenter);
    return newPoint;
}

// shift
void Rectangle::shift(double x, double y) {
    height = height + x;
    width = width + y;
}

// constains
bool Rectangle::constains(Point& p) {
    double x = p.getX();
    double y = p.getX();

    Point p2 = upperLeftVertex;
    double p2X = p2.getX();
    double p2Y = p2.getY();

    if(x <= p2X && y <= p2Y)
        return true;
    else
        return false;
}
