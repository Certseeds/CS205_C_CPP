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
 * @Date: 2021-07-15 21:41:11 
 * @LastEditors  : nanoseeds
 */
#include "big_int_impl.hpp"

namespace BIGINT {
BigInt::BigInt() : pimpl(std::make_unique<BigInt::impl>()) {}

BigInt::BigInt(const BigInt &bi) : pimpl(std::make_unique<BigInt::impl>(bi.pimpl->clone())) {}

BigInt::BigInt(int64_t num) : pimpl(std::make_unique<BigInt::impl>(num)) {}

BigInt::BigInt(std::string num) : pimpl(std::make_unique<BigInt::impl>(std::move(num))) {}

BigInt::BigInt(std::unique_ptr<BigInt::impl> ptr) : pimpl(std::move(ptr)) {}


BigInt BigInt::operator+(const BigInt &bi) const {
    return BigInt{std::make_unique<BigInt::impl>(this->pimpl->plus(bi.pimpl))};
}

BigInt &BigInt::operator+=(const BigInt &bi) {
    this->pimpl->plusEq(bi.pimpl);
    return *this;
}
}

namespace BIGINT {
int main() {
    const BigInt b1{};
    const BigInt b2{123};
    const BigInt b3{b2};
    const BigInt b4{"114514"};
    BigInt b5 = b3 + b4;
    b5 += b4;
    return 0;
}
}
