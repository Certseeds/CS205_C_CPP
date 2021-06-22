//
// Created by lenovo on 2019/12/4.
//
// Rectangle.h  -- Rectangle classes
#ifndef LAB13_RECTANGLE2_H
#define LAB13_RECTANGLE1_H

#include "shape_.h"
class rectangle_: public shape_ {

public:
    rectangle_(rectangle_& rectangle);
    rectangle_(double width,double height);
    rectangle_(){ }
    double GetArea()const;
    void Show();
private:

    double width;
    double height;
};

#endif //LAB13_RECTANGLE2_H
