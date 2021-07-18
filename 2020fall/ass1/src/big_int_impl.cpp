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
 * @Date: 2021-07-15 22:28:46 
 * @LastEditors  : nanoseeds
 */

#include "big_int_impl.hpp"
#include <limits>

namespace BIGINT {

BigInt::impl::impl(int64_t num) {
    this->positive = num >= 0;
    if (num == std::numeric_limits<int64_t>::max()) {
        this->numbers = {INT64_MAX_VECTOR};
        return;
    } else if (num == std::numeric_limits<int64_t>::min()) {
        // prevent that INT64_MIN * -1 overflow to unknown
        this->numbers = {INT64_MIN_VECTOR};
        return;
    }
    if (!this->positive) {
        // input num is negative
        num *= -1;
    }
    while (num != 0) {
        this->numbers.push_back(static_cast<int8_t>(num % base));
        num /= base;
    }

}

BigInt::impl::impl(string num) {
    if (num.empty()) {
        return;
    }
    this->positive = (num[0] != '-');
    for (auto iter = num.cbegin();
         (iter + static_cast<char>(!this->positive)) != num.cend(); iter++) {
        this->numbers.push_back(static_cast<int8_t>((*iter) - '0'));
    }
}

BigInt::impl BigInt::impl::plus(const std::unique_ptr<BigInt::impl> &bii) {
    return BigInt::impl();
}

void BigInt::impl::plusEq(const std::unique_ptr<BigInt::impl> &bii) {
}


[[nodiscard]] BigInt::impl BigInt::impl::clone() const {
    BigInt::impl will_return{};
    will_return.positive = this->positive;
    will_return.numbers.reserve(this->numbers.size());
    for (auto &&num: this->numbers) {
        will_return.numbers.push_back(num);
    }
    return will_return;
}

std::vector<int8_t> numbers{};
bool positive{true};

[[nodiscard]] int32_t BigInt::impl::compare(const std::unique_ptr<BigInt::impl> &bii) const {
    if (this->positive && !bii->positive) {
        return 1; // self +, bii -
    } else if (!this->positive && bii->positive) {
        return -1;// self -, bii +
    }
    if (positive) {
        // both +
        if (this->numbers.size() > bii->numbers.size()) {
            return 1; // 1000 > 100
        } else if (this->numbers.size() < bii->numbers.size()) {
            return -1; // 100 < 1000
        } else {
            // same length
            for (size_t i{this->numbers.size() - 1}; i != 0; --i) {
                if (this->numbers[i] > bii->numbers[i]) {
                    // 200 > 100
                    return 1;
                } else if (this->numbers[i] < bii->numbers[i]) {
                    // 100 > 200
                    return -1;
                }
            }
            return 0; // abs same
        }
    } else {
        // both -
        if (this->numbers.size() > bii->numbers.size()) {
            return -1; // -1000 < -100
        } else if (this->numbers.size() < bii->numbers.size()) {
            return 1; // -100 > -1000
        } else {
            for (size_t i{this->numbers.size() - 1}; i != 0; --i) {
                if (this->numbers[i] > bii->numbers[i]) {
                    // -200 < -100
                    return -1;
                } else if (this->numbers[i] < bii->numbers[i]) {
                    // -100 > -200
                    return 1;
                }
            }
            return 0; // abs same
        }
    }
}// 0: a==b, -1: a<b, 1: a>b

}
