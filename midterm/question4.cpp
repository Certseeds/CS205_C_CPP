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
 * @Date: 2020-04-16 14:06:45 
 * @LastEditors  : nanoseeds
 */
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> encode(const vector<vector<int>> &matrix);

vector<vector<int>> decode(vector<int> line);

int main() {
    vector<vector<int>> matrix = {
            {1, 1, 1, 0},
            {0, 0, 0, 1},
            {1, 1, 1, 1},
            {1, 0, 0, 0}
    };
    vector<int> middle = encode(matrix);
    vector<vector<int>> after = decode(middle);
    for (uint32_t i = 0; i < matrix.size(); ++i) {
        for (uint32_t j = 0; j < matrix[0].size(); ++j) {
            assert(matrix[i][j] == after[i][j]);
        }
    }
    return 0;
}

vector<int> encode(const vector<vector<int>> &matrix) {
    vector<int> will_return;
    will_return.push_back(matrix.size());
    will_return.push_back(matrix[0].size());
    vector<int> temp;
    for (const auto &i : matrix) {
        for (const int &j : i) {
            temp.push_back(j);
        }
    }
    int count = 1;
    temp.push_back(temp.back() ? 0 : 1);
    for (uint32_t i = 1; i < temp.size(); i++) {
        if (temp[i] != temp[i - 1]) {
            will_return.push_back(count);
            count = 1;
        } else {
            count++;
        };
    }
    return will_return;
}

vector<vector<int>> decode(vector<int> line) {
    vector<vector<int>> will_return(line[0], vector<int>(line[1], 0));
    int count = 0;
    bool sign = line[2];
    for (uint32_t i = 2; i < line.size(); ++i) {
        for (int j = 0; j < line[i]; ++j) {
            will_return[count / line[0]][count % line[1]] = sign;
            count++;
        }
        sign = !sign;
    }
    return will_return;
}