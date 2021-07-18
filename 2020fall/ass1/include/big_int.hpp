/*  CS205_C_CPP 
    Copyright (C) 2021  nanoseeds

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
 * @Date: 2021-07-15 21:38:08 
 * @LastEditors  : nanoseeds
 */
#ifndef CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_HPP
#define CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_HPP

#include <cstdint>
#include <string>
#include <memory>

namespace BIGINT {
int main();

class BigInt {
public:
    // Constructors
    BigInt();

    explicit BigInt(int64_t);

    explicit BigInt(std::string);

    BigInt(const BigInt &);

    // Adding
    BigInt operator+(const BigInt &) const;

    BigInt &operator+=(const BigInt &);

    BigInt operator+(long long const &) const;

    BigInt &operator+=(long long);

    // Subtraction
    BigInt operator-(const BigInt &) const;

    BigInt &operator-=(const BigInt &);

    // Multiplication
    BigInt operator*(const BigInt &);

    BigInt &operator*=(const BigInt &);

    BigInt operator*(long long const &);

    BigInt &operator*=(int const &);

    // Compare
    bool operator<(const BigInt &) const;

    bool operator>(const BigInt &) const;

    bool operator<=(const BigInt &) const;

    bool operator>=(const BigInt &) const;

    bool operator==(const BigInt &) const;

    bool operator!=(const BigInt &) const;

    // Allocation
    BigInt operator=(const long long &);

    // Access
    int operator[](int const &);

    // Input & Output
    friend std::istream &operator>>(std::istream &, BigInt &);

    friend std::ostream &operator<<(std::ostream &, const BigInt &);
    struct impl;

private:
    std::unique_ptr<impl> pimpl;
    explicit BigInt(std::unique_ptr<BigInt::impl> ptr) ;
};
}
#endif //CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_HPP
