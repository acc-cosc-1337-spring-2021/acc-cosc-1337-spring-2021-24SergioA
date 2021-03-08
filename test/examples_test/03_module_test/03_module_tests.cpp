#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function", "return true if even or false if odd")
{
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(5) == false);
}

TEST_CASE("Test get generational function", "accept a year return generational for that period")
{
	REQUIRE(get_generational(1924) == "Invalid Year")
	REQUIRE(get_generational(1997) == "Centenial")
	REQUIRE(get_generational(1990) == "Millenial")

}