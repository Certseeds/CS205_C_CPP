//
// Created by lenovo on 2019/12/4.
//
// Circle.cpp -- Circle class methods
#include "Circle.h"
#include <iostream>
int Circle::numberOfObjects = 0;
Circle::Circle(Circle &C){
    radius= C.radius;
    numberOfObjects++;
}
Circle::Circle(double radius):radius(radius){
    numberOfObjects++;
}
Circle::~Circle(){
    numberOfObjects++;
}

double Circle::GetRadius(){
    return radius;
}

double Circle::GetArea()const{
    return PI*radius*radius;
}
void Circle::Show() {

    std::cout <<"radius:"<<radius
              <<"\tthe area :"<<GetArea() <<std::endl;
}
