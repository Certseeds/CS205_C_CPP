/*
 * @Github: https://github.com/Certseeds
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-02-28 09:09:33
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-02-28 16:19:14
 */

#include<iostream>
#include <string>
#include <vector>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
const int seconds_minutes = 60;
const int seconds_hour = 60 * seconds_minutes;
const int seconds_day = 24 * seconds_hour;
int main() {
    long long seconds = 0;
    while (0 == seconds || cin.fail()) {
        cout << "Enter the number of Seconds:";
        cin >> seconds;
        if (0 != seconds) {
            cout << seconds;
        }
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cin.sync();
    }
    long long days = seconds / seconds_day;
    seconds = seconds % seconds_day;
    long long hours = seconds / seconds_hour;
    seconds %= seconds_hour;
    long long minutes = seconds / seconds_minutes;
    seconds %= seconds_minutes;
    cout << " " << "seconds = " << days << " days, " << hours;
    cout << " hours, " << minutes << " minutes, " << seconds <<" seconds" <<endl;
    return 0;
}