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
 * @Date: 2021-07-17 17:49:35 
 * @LastEditors  : nanoseeds
 */
#ifndef CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_IMPL_HPP
#define CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_IMPL_HPP

#include "big_int.hpp"
#include <vector>

namespace BIGINT {
using std::string;
using std::vector;
static const vector<int8_t> INT64_MAX_VECTOR{7, 0, 8, 5, 7, 7, 4, 5, 8, 6, 3, 0, 2, 7, 3, 3, 2, 2, 9};
static const vector<int8_t> INT64_MIN_VECTOR{8, 0, 8, 5, 7, 7, 4, 5, 8, 6, 3, 0, 2, 7, 3, 3, 2, 2, 9};
static constexpr int8_t base{10};

struct BigInt::impl {
public:
    impl() = default;

    explicit impl(int64_t num);

    explicit impl(string num);

    BigInt::impl plus(const std::unique_ptr<impl> &bii);

    void plusEq(const std::unique_ptr<impl> &bii);

    [[nodiscard]] BigInt::impl clone() const;

    std::vector<int8_t> numbers{};
    bool positive{true};

    [[nodiscard]] int32_t compare(const std::unique_ptr<BigInt::impl> &bii) const;
};
}

#endif //CS205_C_CPP_2020FALL_ASS1_INCLUDE_BIG_INT_IMPL_HPP
