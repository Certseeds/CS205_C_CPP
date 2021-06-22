//
// Created by lenovo on 2019/12/4.
//
#include <iostream>
#include "rectangle_.h"

rectangle_::rectangle_(rectangle_& rectangle){
    width = rectangle.width;
    height = rectangle.height;

}
rectangle_::rectangle_(double width,double height){
    this->width=width;
    this->height=height;

}
double rectangle_::GetArea()const{
    return width*height;
}
void rectangle_::Show() {
    // set up ###.## format
    Formatting flag = SetFormat();
    std::cout <<"width:"<<width
              <<"\theight:"<<height
              <<"\tthe area :"<<GetArea() <<std::endl;
    // Restore original format
    Restore(flag);
}