#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Verify number grade to letter grade", "verification")
{
	REQUIRE(get_letter_grade_using_if(98)== "A");
	REQUIRE(get_letter_grade_using_if(88)== "B");
	REQUIRE(get_letter_grade_using_if(78)== "C");
	REQUIRE(get_letter_grade_using_if(68)== "D");
	REQUIRE(get_letter_grade_using_if(58)== "F");
}

TEST_CASE("Verify letter grade", "verification")
{
	REQUIRE(get_letter_grade_using_switch(98)== "A");
	REQUIRE(get_letter_grade_using_switch(88)== "B");
	REQUIRE(get_letter_grade_using_switch(78)== "C");
	REQUIRE(get_letter_grade_using_switch(68)== "D");
	REQUIRE(get_letter_grade_using_switch(58)== "F");
}
