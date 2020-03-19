#define UNIT_TESTING_ASSIGNMENT_2
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include "./Assignment_2.cpp"
#include <iostream>
using std::cout;
using std::endl;
TEST_CASE("Assignment_2", "[run]") {
	sub_main_assignment_2();
	cin.get();
	cin.get();
}