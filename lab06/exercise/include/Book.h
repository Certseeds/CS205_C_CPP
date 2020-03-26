/* CS205_C_CPP 
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
 * @Date: 2020-03-26 18:10:42 
 * @LastEditors  : nanoseeds
 */
#ifndef CS205_C_CPP_LAB06_EXERCISE_INCLUDE_BOOK_H
#define CS205_C_CPP_LAB06_EXERCISE_INCLUDE_BOOK_H


#include <cstdint>

class Book {
public:
    const int Write_Year = 2020;
    int32_t uuid;
    double height;
    double length;
    Book();
    explicit Book (int32_t uuid_in);
    Book(int32_t uuid_in,double height_in,double length_in);
    Book(const Book&) = delete;
    Book& operator=(const Book&) = delete;
    int Get_Uuid();
    double Get_Area();
};


#endif //CS205_C_CPP_LAB06_EXERCISE_INCLUDE_BOOK_H
