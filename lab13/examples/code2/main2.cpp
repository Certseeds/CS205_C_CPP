//main.cpp the main program
#include <iostream>
#include "circle_.h"
#include "rectangle_.h"
#include "shape_.h"
using namespace std;
int main() {
    double r;
    circle_ circle1(3);
    circle1.Show();

    rectangle_ rectangle1(4,4);
    rectangle_ rectangle2(3.5,35.9);
    rectangle1.Show();
    rectangle2.Show();

    cout<<"This program generates "<<shape_::GetNumOfObj() <<" objects";
    return 0;
}

