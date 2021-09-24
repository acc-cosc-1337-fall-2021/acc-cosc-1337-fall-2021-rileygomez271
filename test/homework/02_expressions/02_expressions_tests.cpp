#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Case 1: Test get sales tax for meal") 

{   double get_sales_tax_amount(double meal_amount);
	REQUIRE(get_sales_tax_amount(10) == 0.675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Test Case 2: Test get tip amount for meal")
{
	REQUIRE(get_tip_amount(20, 15) == 3);
	REQUIRE(get_tip_amount(20, 20) == 4);
}