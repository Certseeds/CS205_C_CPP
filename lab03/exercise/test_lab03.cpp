#define UNIT_TESTING_LAB_03


#include "catch_main.hpp"
#include "./lab03_01.cpp"
#include "./lab03_02.cpp"
#include "./lab03_03.cpp"
#include <iostream>

using std::cout;
using std::endl;

TEST_CASE("test_lab03_01", "[run][.]") {
    sub_main_03_01();
    cin.get();
    cin.get();
}

TEST_CASE("test_lab03_02", "[run][.]") {
    sub_main_03_02();
    cin.get();
    cin.get();
}

TEST_CASE("test_lab03_03", "[run][.]") {
    sub_main_03_03();
    cin.get();
    cin.get();
}