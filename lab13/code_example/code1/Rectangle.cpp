//
// Created by lenovo on 2019/12/4.
// Rectangle.cpp -- Rectangle class methods
#include <iostream>
#include "Rectangle.h"
int Rectangle::numberOfObjects = 0;
Rectangle::Rectangle(Rectangle& rectangle){
    width = rectangle.width;
    height = rectangle.height;
    numberOfObjects++;
}
Rectangle::Rectangle(double width,double height){
    this->width=width;
    this->height=height;
    numberOfObjects++;
}
double Rectangle::GetArea()const{
    return width*height;
}
void Rectangle::Show() {
    std::cout <<"width:"<<width
              <<"\theight:"<<height
              <<"\tthe area :"<<GetArea() <<std::endl;
}