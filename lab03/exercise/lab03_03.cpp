#include <iostream>
#include "CandyBar.h"

using std::cin;
using std::cout;
using std::endl;

int sub_main_03_03();

#ifndef UNIT_TESTING_LAB_03
#define UNIT_TESTING_LAB_03

int main() {
    int will_return = sub_main_03_03();
    cin.get();
    cin.get();
    return will_return;
}

#endif // !UNIT_TESTING_LAB_03

int sub_main_03_03() {
    CandyBar cb_array[3];
    cb_array[0] = {"Mona coke", 3, 31};
    cb_array[1] = {"Mona coke", 11.2, 45};
    cb_array[2] = {"Mona coke", 91.1, 92};
    for (const auto &i : cb_array) {
        cout << "Brand: " << i.name << endl;
        cout << "Weight: " << i.weight << endl;
        cout << "Calorie: " << i.calories << endl;
    }
    return 0;
}