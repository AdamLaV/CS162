
//Bring in unit testing code
#include "catch.hpp"

//Include your .h files
#include "Rectangle.h"
#include "Point.h"

using namespace std;


Point p1(1, 2);
Point p2(6, -2);
Rectangle r2(p1, p2);

TEST_CASE( "Rectangle/Constructor1", "3 argument constructor" ) {

    Rectangle r1(p1, 2, 4);
    Point temp = r1.getUpperLeftVertex();
    REQUIRE( temp.isSameAs(p1) == true);

}

TEST_CASE( "Rectangle/Constructor2","2 argument constructor"  ) {

    Point temp2 = r2.getUpperLeftVertex();
    REQUIRE( temp2.isSameAs(p1) == true);
    REQUIRE( r2.getWidth() == Approx(5));
    REQUIRE( r2.getHeight() == Approx(4));
}

TEST_CASE( "Rectangle/getUpperLeftVertex method" ) {
    Point temp2 = r2.getUpperLeftVertex();
    REQUIRE( temp2.isSameAs(r2.getUpperLeftVertex()));
}

TEST_CASE ( "Rectangle/getWidth method") {
    REQUIRE( r2.getWidth() == Approx(5));
}

TEST_CASE ( "Rectangle/getHeigt method") {
    REQUIRE( r2.getHeight() == Approx(4));
}

