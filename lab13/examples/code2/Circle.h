//
// Created by lenovo on 2019/12/4.
//
// Circle.h  -- Circles classes
#ifndef LAB13_CIRCLE2_H
#define LAB13_CIRCLE1_H

#define PI 3.1415
#include "Shape.h"
class Circle :public Shape {
public:
    Circle(double radius);
    Circle(Circle &C);
    ~Circle();
    double GetRadius();
    double GetArea()const;
    void Show();
private:
    double radius;
};


#endif //LAB13_CIRCLE2_H
