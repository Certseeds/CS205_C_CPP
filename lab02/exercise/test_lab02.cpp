/**
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-03-25 21:20:01 
 * @LastEditors  : nanoseeds
 */

#define UNIT_TESTING_LAB_02

#include "catch_main.hpp"
#include "./lab02_01.cpp"
#include "./lab02_02.cpp"
#include "./lab02_03.cpp"
#include <iostream>

using std::cout;
using std::endl;

TEST_CASE("test_lab03_01", "[run][.]") {
    sub_main_02_01();
    cin.get();
    cin.get();
}

TEST_CASE("test_lab03_02", "[run][.]") {
    sub_main_02_02();
    cin.get();
    cin.get();
}

TEST_CASE("test_lab03_03", "[run][.]") {
    sub_main_02_03();
    cin.get();
    cin.get();
}