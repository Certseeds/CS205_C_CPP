//
// Created by lenovo on 2019/12/4.
//

#include "circle_.h"
#include <iostream>

circle_::circle_(circle_ &C){
    radius= C.radius;

}
circle_::circle_(double radius):radius(radius){

}
circle_::~circle_(){

}

double circle_::GetRadius(){
    return radius;
}

double circle_::GetArea()const{
    return PI*radius*radius;
}
void circle_::Show() {
    // set up ###.## format
    Formatting flag = SetFormat();

    std::cout <<"radius:"<<radius
              <<"\tthe area :"<<GetArea() <<std::endl;
    // Restore original format
    Restore(flag);
}
