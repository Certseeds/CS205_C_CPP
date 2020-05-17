//
// Created by lenovo on 2019/12/4.
//
// Rectangle.cpp -- Rectangle class methods
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(Rectangle& rectangle){
    width = rectangle.width;
    height = rectangle.height;

}
Rectangle::Rectangle(double width,double height){
    this->width=width;
    this->height=height;

}
double Rectangle::GetArea()const{
    return width*height;
}
void Rectangle::Show() {
    // set up ###.## format
    Formatting flag = SetFormat();
    std::cout <<"width:"<<width
              <<"\theight:"<<height
              <<"\tthe area :"<<GetArea() <<std::endl;
    // Restore original format
    Restore(flag);
}