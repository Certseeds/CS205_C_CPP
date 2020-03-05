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
#define hours_number 24 
#define minute_number 60 
#define second_number 60 
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
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
    long long days = seconds / (hours_number* minute_number* second_number);
    seconds = seconds % (hours_number * minute_number * second_number);
    long long hours = seconds / (minute_number * second_number);
    seconds %= (minute_number * second_number);
    long long minutes = seconds / second_number;
    seconds %= second_number;
    cout << " " << "seconds = " << days << " days, " << hours;
    cout << " hours, " << minutes << " minutes, " << seconds <<" seconds" <<endl;
    return 0;
}