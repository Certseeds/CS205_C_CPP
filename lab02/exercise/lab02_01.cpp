/*
 * @Github: https://github.com/Certseeds
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-02-28 07:49:01
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-02-28 09:59:17
 */
#include <iostream>
#include <vector>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int sub_main_02_01();

#ifndef UNIT_TESTING_LAB_02
#define UNIT_TESTING_LAB_02
int main() {
    int will_return = sub_main_02_01();
    cin.get();
    cin.get();
    return will_return;
}
#endif // !UNIT_TESTING_LAB_03

int sub_main_02_01() {
    cout << "Result:" << endl;
    printf("%-2s%-s %-2s%s  %s%-5s%s\n", "x", "value",
           "y", "value", "Expressions", " ", "Result");
    //cout << "x value y value  Expressions   Result"<<endl;
    const int x = 10;
    const int y = 5;
    char str1[5][4] = {"y+3", "y-2", "y*5", "x/y", "x%y"};
    vector<int> str2 = {y + 3, y - 2, y * 5, x / y, x % y};
    for (int i = 0; i < 5; i++) {
        printf("%-3d|%4s%-2d|%6s", x, " ", y, " ");
        printf("x=%-14s|x=%-4d", str1[i], str2[i]);
        cout << endl;
    }
    return 0;
}

int main_lab02_01() {
    cout << "Result:" << endl;
    printf("%-2s%-s %-2s%s  %s%-5s%s\n", "x", "value",
           "y", "value", "Expressions", " ", "Result");
    //cout << "x value y value  Expressions   Result"<<endl;
    const int x = 10;
    const int y = 5;
    vector<int> vec1 = {1, 2, 3, 4, 5};
    for (auto i : vec1) {
        cout << i << endl;
    }
    char str1[5][4] = {"y+3", "y-2", "y*5", "x/y", "x%y"};
    vector<int> str2 = {y + 3, y - 2, y * 5, x / y, x % y};
    for (int i = 0; i < 5; i++) {
        printf("%-3d|%4s%-2d|%6s", x, " ", y, " ");
        printf("x=%-14s|x=%-4d", str1[i], str2[i]);
        cout << endl;
    }
    return 0;
}