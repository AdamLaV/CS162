/**
  * @brief Assignment 2
  * @author Daidemang Francis
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Point.h"

/**
 * @brief The Rectangle class represents a rectangle on a Cartesian plane
 */
class Rectangle {
public:

    /**
     * @brief Rectangle constructor rectangle using given points as upper left
     * (p1) and lower right (p2) corners
     * @param p1 upperleft corner
     * @param p2 lowerleft corner
     */
    Rectangle(Point& p1, Point& p2);

    /**
     * @brief Rectangle constructor rectangle using given points as upper lef
     * corner and indicated width and height
     * @param p1 upperleft corner
     * @param heightValue indicated height
     * @param widthValue indicated width
     */
    Rectangle(Point& p1, double heightValue, double widthValue);

    /**
     * @brief getUpperLeftVertex
     * @return return point representing location of the upper left vertext
     * of the rectangle
     */
    Point getUpperLeftVertex()const;

    /**
     * @brief getWidth
     * @return return width value
     */
    double getWidth()const;

    /**
     * @brief getHeight
     * @return return height value
     */
    double getHeight()const;

    /**
     * @brief getArea
     * @return compute and return the area
     */
    double getArea();

    /**
     * @brief getPerimeter
     * @return compute and return the perimeter
     */
    double getPerimeter();

    /**
     * @brief getCenter
     * @return compute location, make a new point representing it to return
     */
    Point getCenter();

    /**
     * @brief shift move the rectangle by the given amount x and y dimensions
     * @param x point to move by
     * @param y point to move by
     */
    void shift(double x, double y);

    /**
     * @brief constains
     * @param p point to check
     * @return true if indicated Point is within the rectangle
     */
    bool constains(Point p);

private:
    Point upperLeftVertex;
    double height;
    double width;
};

#endif // RECTANGLE_H
