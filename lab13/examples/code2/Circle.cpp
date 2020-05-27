//
// Created by lenovo on 2019/12/4.
//
// Circle.cpp -- Circle class methods
#include "Circle.h"
#include <iostream>

Circle::Circle(Circle &C){
    radius= C.radius;

}
Circle::Circle(double radius):radius(radius){

}
Circle::~Circle(){

}

double Circle::GetRadius(){
    return radius;
}

double Circle::GetArea()const{
    return PI*radius*radius;
}
void Circle::Show() {
    // set up ###.## format
    Formatting flag = SetFormat();

    std::cout <<"radius:"<<radius
              <<"\tthe area :"<<GetArea() <<std::endl;
    // Restore original format
    Restore(flag);
}
