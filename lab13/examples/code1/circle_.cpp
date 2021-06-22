//
// Created by lenovo on 2019/12/4.
//
// Circle.cpp -- Circle class methods
#include "circle_.h"
#include <iostream>
int circle_::numberOfObjects = 0;
circle_::circle_(circle_ &C){
    radius= C.radius;
    numberOfObjects++;
}
circle_::circle_(double radius):radius(radius){
    numberOfObjects++;
}
circle_::~circle_(){
    numberOfObjects++;
}

double circle_::GetRadius(){
    return radius;
}

double circle_::GetArea()const{
    return PI*radius*radius;
}
void circle_::Show() {

    std::cout <<"radius:"<<radius
              <<"\tthe area :"<<GetArea() <<std::endl;
}
