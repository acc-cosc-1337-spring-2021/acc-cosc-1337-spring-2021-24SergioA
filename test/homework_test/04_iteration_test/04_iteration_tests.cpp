#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test Content")
{
	REQUIRE("AGCTATAG" == .375);
	REQUIRE("CCCGGAAAAT" == .50);
}

TEST_CASE("Verify Test Reverse")
{
	REQUIRE("AGCTATAG" == "GATATCGA");
	REQUIRE("CGCTATAG" == "GATATCGC");

}

TEST_CASE("Verify Test Complement")
{
	REQUIRE("AAAACCCGGT" == "ACCGGGTTTT");
	REQUIRE("CCCGGAAAAT" == "ATTTTCCGGG");
}