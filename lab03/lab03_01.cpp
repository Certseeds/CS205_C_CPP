#include<iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include "CandyBar.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int sub_main_03_01();

#ifndef UNIT_TESTING_LAB_03
#define UNIT_TESTING_LAB_03
int main() {
    int will_return = sub_main_03_01();
    cin.get();
    cin.get();
    return will_return;
}
#endif // !UNIT_TESTING_LAB_03
int sub_main_03_01() {
    CandyBar snack = { "Mocha Munch",2.3,350 };
    cout <<"Brand: "<<snack.name << endl;
    cout <<"Weight: " <<snack.weight << endl;
    cout <<"Calorie: " << snack.calories << endl;
    return 0;
}