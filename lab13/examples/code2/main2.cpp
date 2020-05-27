//main.cpp the main program
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
using namespace std;
int main() {
    double r;
    Circle circle1(3);
    circle1.Show();

    Rectangle rectangle1(4,4);
    Rectangle rectangle2(3.5,35.9);
    rectangle1.Show();
    rectangle2.Show();

    cout<<"This program generates "<<Shape::GetNumOfObj() <<" objects";
    return 0;
}

