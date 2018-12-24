// After Connecting each piece to the pogram, each test should look like this:

TEST_CASE( "UniqueMachineName" ) {
    //Do any setup we need to before we can test what we want
    REQUIRE( something is true );
    
// Example 
    
    TEST_CASE( "Circle/DefaultConstructor" ) {
    Circle c1;
    REQUIRE( c1.getX() == 0 );
    REQUIRE( c1.getY() == 0 );
    REQUIRE( c1.getRadius() == 2 );
}
    
    TEST_CASE( "Circle/1-arg-constructor" ) {
        Circle c1(3.3);
        REQUIRE( c1.getX() == 0 );
        REQUIRE( c1.getY() == 0 );
        REQUIRE( c1.getRadius() == 3.3 );
        
        circle c2(-4); //test negative value - should be made positive
        REQUIRE( c2.getRadius() == 4 );
        
    }
    
// what to test
    // test public interface
    // test every method/construct 
    

// pattern
    // Make an object 
    // call function to be tested
    // Reqiure corret data

    
