//Bring in unit testing code
#include "catch.hpp"

//Include your .h files
#include "Rectangle.h"
#include "Point.h"

TEST_CASE( "Rectangle/Constructor1", "3 argument constructor" ) {

    Point p1(1, 5);
    Rectangle r1(p1, 2, 4);
    Point temp = r1.getUpperLeftVertex();
    REQUIRE( temp.isSameAs(p1) == true);

}

TEST_CASE( "Rectangle/Constructor2","2 argument constructor"  ) {

    Point p1(5, 5);
    Point p2(5, 5);
    Rectangle r2(p1, p2);
    Point temp2 = r2.getUpperLeftVertex();
    REQUIRE( temp2.isSameAs(p1) == true);
    REQUIRE( abs(p1.getY() - p2.getY()) == r2.getWidth());
    REQUIRE( abs(p1.getX() - p2.getX()) == r2.getHeight());
}
