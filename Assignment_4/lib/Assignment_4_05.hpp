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
 * @Date: 2020-04-20 08:50:41
 * @LastEditors  : nanoseeds
 */
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int32_t recieve_input();

int32_t question5();

std::string str_lower(std::string str);

std::string trim(std::string str);

// commands
static constexpr const char* const command[] {"start", "stop", "restart", "reload", "status", "exit"};
static constexpr const int32_t exit_n = 5;
static constexpr const int32_t illegal = 6;