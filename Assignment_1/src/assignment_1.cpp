/*
 * @Github: https://github.com/Certseeds
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-03-05 21:56:08
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-03-06 21:35:15
 */
#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int sub_main();

int get_city_itude(vector<double> &dous, vector<string> &strs, const string &num, int order);

bool judge_legal(const string &s);

bool judge_legal2(const string &s);

bool judge_two_double(const string &s);

string delete_space(string str);

int give_two_double(string s, vector<double> &num, int order);

bool check_double(const string &s);

bool IsDoubleString(const std::string &s);

double count_distance(vector<double> &dous);

const int max_length = 1024;
const int radius_earth = 6371;
const double PI = 3.1415926535;
//+ - . is �Ϸ�
#ifndef UNIT_TESTING_ASSIGNMENT_1
#define UNIT_TESTING_ASSIGNMENT_1

int main() {
    int will_return = sub_main();
    cin.get();
    cin.get();
    return will_return;
}

#endif // !UNIT_TESTING_ASSIGNMENT_1

int sub_main() {
    vector<double> dous(4, 0.0f);
    vector<string> strs(4, "");
    int return_value1 = get_city_itude(dous, strs, "first", 0);
    if (0 != return_value1) {
        return return_value1;
    }
    int return_value2 = get_city_itude(dous, strs, "second", 2);
    if (0 != return_value2) {
        return return_value2;
    }
    cout << "The distance between ";
    cout << strs[0] << " and ";
    cout << strs[2] << " is ";
    cout << count_distance(dous) << " km";
    return 0;
}

double count_distance(vector<double> &dous) {
    dous[0] = 90 - dous[0];
    dous[2] = 90 - dous[2];
    // data is la,lo ,la,lo
    double distance_1 =
            std::sin(std::abs(dous[0]) * PI / 180) *
            std::sin(std::abs(dous[2]) * PI / 180) *
            std::cos(std::abs(dous[1] - dous[3]) * PI / 180);
    double distance_2 =
            std::cos(std::abs(dous[0]) * PI / 180) *
            std::cos(std::abs(dous[2]) * PI / 180);
    double distance = radius_earth * std::acos(distance_1 + distance_2);
    return distance;
}

int get_city_itude(
        vector<double> &dous, vector<string> &strs, const string &num, int order) {
    char first[1024] = {0};
    char itude[1024] = {0};
    cout << "The " << num << " city : ";
    cin.getline(first, max_length);
    strs[order] = first;
    if (!judge_legal(strs[order])) {
        cout << "City name should not contain special characters" << endl;
        return -1;
    }
    cout << "The latitude and longitude of " << num << " city: ";
    cin.getline(itude, max_length);
    strs[order + 1] = delete_space(itude);
    if (std::count(strs[order + 1].begin(), strs[order + 1].end(), ' ') == 0) {
        cout << "bad input,longitude or latitude's middle ";
        cout << "should be space and both of them is needed" << endl;
        return -2;
    }
    if (!judge_legal2(strs[order + 1])) {
        cout << "bad input,longitude or latitude should not contain special characters" << endl;
        return -3;
    }
    int double_return_value = give_two_double(strs[order + 1], dous, order);
    if (-1 == double_return_value) {
        cout << "longitude or latitude contain too much + . -  or" << endl;
        return -4;
    }
    if (-2 == double_return_value) {
        cout << "input should obey correct input format" << endl;
        return -5;
    }
    if (0.0f == dous[order] || 0.0f == dous[order + 1]) {
        cout << "longitude or latitude should not be zero" << endl;
        return -6;
    }
    if (std::abs(dous[order]) > 90 || std::abs(dous[order + 1]) > 180) {
        cout << "latitude should belong to [-90,+90]" << endl;
        cout << "longitude should belong to [-180,+180]" << endl;
        return -7;
    }
    return 0;
}

bool judge_legal(const string &s) {
    for (auto i : s) {
        if (!(static_cast<int>(' ') == i || static_cast<int>(',') == i ||
              (i >= static_cast<int>('A') && i <= static_cast<int>('Z')) ||
              (i >= static_cast<int>('a') && i <= static_cast<int>('z')))) {
            return false;
        }
    }
    return true;
}

bool judge_legal2(const string &s) {
    for (auto i : s) {
        if (!(static_cast<int>('+') == i || static_cast<int>('-') == i ||
              static_cast<int>(' ') == i || static_cast<int>('.') == i ||
              (i >= static_cast<int>('0') && i <= static_cast<int>('9')))) {
            return false;
        }
    }
    return true;
}

string delete_space(string str) {
    if (str.empty()) {
        return str;
    }
    str.erase(0, str.find_first_not_of(" "));
    str.erase(str.find_last_not_of(" ") + 1);
    return str;
}

bool check_double(const string &s) {
    if (std::count(s.begin(), s.end(), '.') > 1 ||
        (std::count(s.begin(), s.end(), '+') +
         std::count(s.begin(), s.end(), '-') > 1)) {
        return false;
    }
    return true;
}

int give_two_double(string s, vector<double> &num, int order) {
    int middle = s.find_first_of(' ');
    string s1 = delete_space(s.substr(0, middle));
    string s2 = delete_space(s.substr(middle, s.size()));
    if (check_double(s1) == false || check_double(s2) == false) {
        return -1;
    }
    try {
        num[order] = std::stof(s1);
        num[order + 1] = std::stof(s2);
    } catch (std::invalid_argument e) {
        return -2;
    }
    return 0;
}