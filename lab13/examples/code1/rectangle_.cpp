//
// Created by lenovo on 2019/12/4.
// Rectangle.cpp -- Rectangle class methods
#include <iostream>
#include "rectangle_.h"
int rectangle_::numberOfObjects = 0;
rectangle_::rectangle_(rectangle_& rectangle){
    width = rectangle.width;
    height = rectangle.height;
    numberOfObjects++;
}
rectangle_::rectangle_(double width,double height){
    this->width=width;
    this->height=height;
    numberOfObjects++;
}
double rectangle_::GetArea()const{
    return width*height;
}
void rectangle_::Show() {
    std::cout <<"width:"<<width
              <<"\theight:"<<height
              <<"\tthe area :"<<GetArea() <<std::endl;
}