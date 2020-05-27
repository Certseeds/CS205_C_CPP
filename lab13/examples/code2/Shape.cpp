//
// Created by lenovo on 2019/12/4.
//

// Shape.cpp -- Shape class methods
#include <iostream>
#include "Shape.h"
using namespace std;
int Shape::numberOfObjects = 0;

// protected methods for formatting
Formatting Shape::SetFormat() const
{
    // set up ###.## format
    Formatting f;
    f.flag =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(3);
    return f;
}

void Shape::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}