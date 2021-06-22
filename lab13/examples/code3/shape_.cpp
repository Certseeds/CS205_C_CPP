//
// Created by lenovo on 2019/12/4.
//
// Shape.cpp -- Shape class methods
#include <iostream>
#include "shape_.h"
using namespace std;
int shape_::numberOfObjects = 0;

// protected methods for formatting
Formatting shape_::SetFormat() const
{
    // set up ###.## format
    Formatting f{};
    f.flag =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(3);
    return f;
}

void shape_::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}


void shape_::Show() {
    // set up ###.## format
    Formatting flag = SetFormat();
    std::cout <<"The Shape!"<<std::endl;
    // Restore original format
    Restore(flag);
}
double shape_::GetArea()const{
    std::cout <<"The Shape::GetArea!"<<std::endl;
    return 0;
}