#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

/*
TEST_CASE("Test get_letter_grade_using_if", "verification") 
{
    REQUIRE(get_letter_grade_using_if(80) == "B");
    REQUIRE(get_letter_grade_using_if(93) == "A");
    REQUIRE(get_letter_grade_using_if(79) == "C");
    REQUIRE(get_letter_grade_using_if(63) == "D");
    REQUIRE(get_letter_grade_using_if(49) == "F");
    REQUIRE(get_letter_grade_using_if(-12) == "invalid");
}
*/


TEST_CASE("Verify number grade to letter grade", "verification")
{
	REQUIRE(get_letter_grade_using_if(90) == "A");
	REQUIRE(get_letter_grade_using_if(80) == "B");
	REQUIRE(get_letter_grade_using_if(70) == "C");
	REQUIRE(get_letter_grade_using_if(60) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
}

TEST_CASE("Verify letter grade", "verification")
{
	REQUIRE(get_letter_grade_using_switch(98) == "A");
	REQUIRE(get_letter_grade_using_switch(88) == "B");
	REQUIRE(get_letter_grade_using_switch(78) == "C");
	REQUIRE(get_letter_grade_using_switch(68) == "D");
	REQUIRE(get_letter_grade_using_switch(58) == "F");
}