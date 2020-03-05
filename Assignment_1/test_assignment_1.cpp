#define UNIT_TESTING_ASSIGNMENT_1
#define CATCH_CONFIG_MAIN
#include "./../catch.hpp"
#include "assignment_1.cpp"
#include <iostream>
using std::cout;
using std::endl;
TEST_CASE("test_judge_legal", "[judge_legal]") {
	REQUIRE(1 == judge_legal("Beijing "));
	REQUIRE(0 == judge_legal("Shang@hai"));
	REQUIRE(1 == judge_legal(""));
	REQUIRE(1 == judge_legal("New Yodk, USA"));
	REQUIRE(1 == judge_legal("London, UK"));
	REQUIRE(1 == judge_legal("Pairs, France"));
	REQUIRE(1 == judge_legal("Kolkata, India"));	
	REQUIRE(1 == judge_legal("Moscow, Russia"));
	REQUIRE(1 == judge_legal("Rio de Janeiro, Brazil"));
	REQUIRE(0 == judge_legal("114514@gmail.comn"));
	REQUIRE(0 == judge_legal("C#come from microsoft"));
	REQUIRE(1 == judge_legal(""));

}
TEST_CASE("test1", "[test]") {
	cout << 1 << endl;
}
TEST_CASE("mains", "[run]") {
	CHECK(0 == sub_main());
}
