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
#include "Assignment_4_03.hpp"

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