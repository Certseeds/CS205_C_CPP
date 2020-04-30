/*  CS205_C_CPP 
    Copyright (C) 2020  nanoseeds

    CS205_C_CPP is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CS205_C_CPP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
    */
/**
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-04-19 22:37:16
 * @LastEditors  : nanoseeds
 */
#include <random>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;
//  [2000,2020]
const std::pair<int32_t, int32_t> range(2000, 2020);
// lab number
const int32_t lab_number = 14;
// sid to vector
unordered_map<int32_t, vector<int32_t>> umap;

int32_t question1();

int32_t question2();

int32_t question3();

int main() {
    question1();
    question2();
    question3();
    return 0;
}


int32_t question1() {
    // student-number
    uint32_t number = 0;
    // randoms
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int32_t> year(range.first, range.second);
    std::uniform_int_distribution<int32_t> last(0, 9);
    std::uniform_int_distribution<int32_t> scores(0, 5);
    cout << "The Number of students" << endl;
    // read
    cin >> number;
    if (cin.fail()) {
        cout << "Bad input" << endl;
        return -1;
    }
    // random produce until is enough
    while (number != umap.size()) {
        int32_t id = year(e1);
        for (uint32_t j = 0; j < 4; ++j) {
            id = id * 10 + last(e1);
        }
        vector<int32_t> score(lab_number, 0);
        for (int &j : score) {
            j = scores(e1);
        }
        umap[id] = score;
    }
    //  output
    for (const auto &i:umap) {
        cout << i.first << ": ";
        for (uint32_t j = 0; j < i.second.size() - 1; ++j) {
            cout << i.second[j] << ", ";
        }
        cout << i.second.back() << endl;
    }
    return 0;
}

int32_t question2() {
    for (const auto &i:umap) {
        // int32_t times = ;
        if (std::count(i.second.begin(), i.second.end(), 0) >= 2) {
            // cout << i.first << " " << "Absent " << times << " times" << endl;
            cout << i.first << endl;
        }
    }
    return 0;
}

int32_t question3() {
    // file
    std::ofstream file("./lab_records.csv");
    if (!file.is_open()) {
        cout << "Open file failed" << endl;
        return 0;
    }
    // write
    for (const auto &i:umap) {
        file << i.first << ",";
        for (uint32_t j = 0; j < i.second.size() - 1; ++j) {
            file << i.second[j] << ",";
        }
        file << i.second.back() << endl;
    }
    // close
    file.close();
    return 0;
}