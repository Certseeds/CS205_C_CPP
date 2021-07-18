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
#include "catch_main.hpp"

namespace BIGINT {
BigInt::impl bi{};

TEST_CASE("test1") {
    CHECK(33 == 33);
}

TEST_CASE("compare >", "[big int impl]") {
    CHECK(BigInt::impl{12345ll}.compare(std::make_unique<BigInt::impl>(-12345ll)) == 1);
    CHECK(BigInt::impl{1919810ll}.compare(std::make_unique<BigInt::impl>(1919809ll)) == 1);
    CHECK(BigInt::impl{76567876567ll}.compare(std::make_unique<BigInt::impl>(0ll)) == 1);
    CHECK(BigInt::impl{765987678ll}.compare(std::make_unique<BigInt::impl>(76598767l)) == 1);
    CHECK(BigInt::impl{3456789009876l}.compare(std::make_unique<BigInt::impl>(34789009876l)) == 1);
    CHECK(BigInt::impl{std::numeric_limits<int64_t>::max()}.compare(std::make_unique<BigInt::impl>(std::numeric_limits<int64_t>::min())) == 1);
    CHECK(BigInt::impl{std::numeric_limits<int64_t>::max()}.compare(std::make_unique<BigInt::impl>(0ll)) == 1);

}
TEST_CASE("compare == ", "[big int impl]") {
    CHECK(BigInt::impl{12345ll}.compare(std::make_unique<BigInt::impl>(12345ll)) == 0);
    CHECK(BigInt::impl{-12345ll}.compare(std::make_unique<BigInt::impl>(-12345ll)) == 0);
    CHECK(BigInt::impl{std::numeric_limits<int64_t>::min()}.compare(std::make_unique<BigInt::impl>(std::numeric_limits<int64_t>::min())) == 0);
    CHECK(BigInt::impl{std::numeric_limits<int64_t>::max()}.compare(std::make_unique<BigInt::impl>(std::numeric_limits<int64_t>::max())) == 0);
    CHECK(BigInt::impl{-12345ll}.compare(std::make_unique<BigInt::impl>(-12345ll)) == 0);
}
TEST_CASE("compare < ", "[big int impl]") {
    CHECK(BigInt::impl{-12345ll}.compare(std::make_unique<BigInt::impl>(12345ll)) == -1);
}
}
