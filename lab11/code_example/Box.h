//
// Created by lenovo on 2019/11/20.
//
#ifndef EXAMPLE_BOX_H
#define EXAMPLE_BOX_H

class Box {
private:
    double length;         // Length of a box
    double breadth;        // Breadth of a box
    double height;         // Height of a box
public:
    // Default Constructor
    Box();

    //Parameterized Constructor
    Box(int, int, int);

    //copy constructor
    Box(const Box &b);

    // This is the destructor: declaration
    ~Box();

    // Member functions declaration
    double getVolume(void);

    void setLength(double len);

    void setBreadth(double bre);

    void setHeight(double hei);
};

#endif //EXAMPLE_BOX_H
