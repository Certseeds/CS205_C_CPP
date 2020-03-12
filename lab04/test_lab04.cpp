#define UNIT_TESTING_LAB_04
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include "./lab04_01.cpp"
#include "./lab04_02.cpp"
#include "./lab04_03.cpp"
#include <iostream>
using std::cout;
using std::endl;
TEST_CASE("test_lab04_01", "[run]") {
	sub_main_04_01();
	cin.get();
	cin.get();
}
TEST_CASE("test_lab04_02", "[run]") {
	sub_main_04_02();
	cin.get();
	cin.get();
}
TEST_CASE("test_lab04_03", "[run]") {
	sub_main_04_03();
	cin.get();
	cin.get();
}