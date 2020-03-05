#include<iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int sub_main();
bool judge_legal(const string& s);
//+ - . is ºÏ·¨
#ifndef UNIT_TESTING_ASSIGNMENT_1
#define UNIT_TESTING_ASSIGNMENT_1
int main() {
    return sub_main();
}
#endif // !UNIT_TESTING_ASSIGNMENT_1

int sub_main() {
    string first = "!";
    string second = "";
    cout << "The first city is :" << endl;
    cin >> first;
    if (!judge_legal(first)) {
        cout << "Wrong forrmat" << endl;
        return -1;
    }
    return 0;
}
bool judge_legal(const string& s) {
    for (auto i : s) {
        if (!(static_cast<int>(' ') == i || static_cast<int>(',') == i ||
            (i >= 65 && i <= 90) || (i >= 97 && i <= 122))) {
            return false;
        }
    }
    return true;
}