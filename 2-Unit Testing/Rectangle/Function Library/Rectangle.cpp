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
double Rectangle::getWidth()const {
    return width;
}

// getHeight method
double Rectangle::getHeight()const {
    return height;
}

// getArea method
double Rectangle::getArea() {
    return width * height;
}

// getPerimeter method
double Rectangle::getPerimeter() {
    return (width + height) * 2;
}

// getCenter method
Point Rectangle::getCenter() {
    Point newPoint;
    newPoint.getX();
    newPoint.getY();

    return newPoint;
}

// shift method
void Rectangle::shift(double x, double y) {
    height = height + x;
    width = width + y;
}

// constains method
//bool Rectangle::constains(Point& p) {
////    double pointX = x;
////	double pointY = y;
////        // This is the piece of code I found
////	if (pointX >= this->x && pointX <= this->x + this->width &&
////pointY >= this->y && pointY <= this->y + this->height)
////		return true;
////	else
////		return false;
//    double x = p.getX();
//    double y = p.getX();



//}
