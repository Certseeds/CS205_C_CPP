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
 * @Date: 2020-04-30 21:35:56 
 * @LastEditors  : nanoseeds
 */
#include "Rectangle.h"
#include <iostream>
#include <iomanip>

Rectangle::Rectangle() {

}

Rectangle::Rectangle(double w, double h) : width(w), height(h) {

}

double Rectangle::getArea() {
    return this->width * this->height;
}

double Rectangle::getPerimeter() {
    return 2 * (this->width + this->height);
}

void Rectangle::display() {
    std::cout << "-------------" << std::endl;
    std::cout << "Width:      " << std::setiosflags(std::ios::left) << this->width << std::endl;
    std::cout << "Height:     " << std::setiosflags(std::ios::left) << this->height << std::endl;
    std::cout << "Area:       " << std::setiosflags(std::ios::left) << this->getArea() << std::endl;
    std::cout << "Perimeter:  " << std::setiosflags(std::ios::left) << this->getPerimeter() << std::endl;
}
