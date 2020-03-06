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
int sub_main_03_02();
#ifndef UNIT_TESTING_LAB_03
#define UNIT_TESTING_LAB_03
int main() {
    int will_return = sub_main_03_02();
    cin.get();
    cin.get();
    return will_return;
}
#endif // !UNIT_TESTING_LAB_03
int sub_main_03_02() {
    char temp_name[1024];
    double weight = 0.0f;
    int calories = 0;
    cout << "Enter brand name of a Candy bar: ";
    cin.getline(temp_name,1024,'\n');
    cout << "Enter weight of the candy bar: ";
    cin >> weight;
    cout << "Enter calories(an integer value) in the Candy bar: ";
    cin >> calories;
    CandyBar cb_1 = { temp_name,weight,calories };
    cout << "Brand: " << cb_1.name << endl;
    cout << "Weight: " << cb_1.weight << endl;
    cout << "Calorie: " << cb_1.calories << endl;
    return 0;
}