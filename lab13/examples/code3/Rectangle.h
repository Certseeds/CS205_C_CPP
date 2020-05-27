//
// Created by lenovo on 2019/12/4.
//

#ifndef LAB13_RECTANGLE2_H
#define LAB13_RECTANGLE1_H

#include "Shape.h"
class Rectangle: public Shape {

public:
    Rectangle(Rectangle& rectangle);
    Rectangle(double width,double height);
    Rectangle(){ }
    double GetArea()const;
    void Show();
private:

    double width;
    double height;
};

#endif //LAB13_RECTANGLE2_H
