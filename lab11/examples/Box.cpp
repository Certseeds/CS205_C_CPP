


#include <iostream>
#include "Box.h"

// Member functions definitions
Box::Box() {
    std::cout << "Object is being created" << std::endl;
    length = 3;
    breadth = 4;
    height = 5;
}

Box::Box(int length, int breadth, int height) {
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

Box::Box(const Box &b) {
    length = b.length;
    breadth = b.breadth;
    height = b.height;
}

Box::~Box() {
    std::cout << "Object is being deleted" << std::endl;
}

double Box::getVolume(void) {
    return length * breadth * height;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

void Box::setHeight(double hei) {
    height = hei;
}

