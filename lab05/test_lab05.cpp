#define _UNIT_TESTING_LAB_05_
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include "./lab05_01.cpp"
#include "./lab05_02.cpp"
#include "./lab05_03.cpp"
#include "./lab05_04.cpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
TEST_CASE("test_lab05_01", "[run]") {
	sub_main_05_01();
	cin.get();
	cin.get();
}
TEST_CASE("test_lab05_02", "[run]") {
	sub_main_05_02();
	cin.get();
	cin.get();
}
TEST_CASE("test_lab05_03", "[run]") {
	sub_main_05_03();
	cin.get();
	cin.get();
}
TEST_CASE("test_lab05_04", "[run]") {
	sub_main_05_04();
	cin.get();
	cin.get();
}