/*
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-03-19 16:33:08
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-03-19 18:23:26
 */
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int32_t sub_main_05_04();
#ifndef _UNIT_TESTING_LAB_05_
#define _UNIT_TESTING_LAB_05_
int main() {
    int32_t will_return = sub_main_05_04();
    cin.get();
    cin.get();
    return will_return;
}
#endif // !_UNIT_TESTING_LAB_05_
int32_t sub_main_05_04() {
    const int32_t range = 7;
    char str[range+1];
    str[range] = '\0';
    for (int32_t i = 0; i < range; i++) {
        memset(str, '*', range * sizeof(char));
        for (int32_t j = 0; j < i+1;j++) {
            str[j] = ('1' + j);
        }
        cout << str << endl;
    }
    return 0;
}