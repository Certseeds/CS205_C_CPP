#ifndef _LAB04_PIZZA_
#define _LAB04_PIZZA_
#include<iostream>
const int lab04_01_max_length = 1024;
class pizza {
public:
    char* name;
    double* diameter;
    double* weight;
    pizza() {
        name = new char[lab04_01_max_length];
        memset(name, '\0', lab04_01_max_length);
        diameter = new double;
        weight = new double;
    }
    pizza(char* n, double d, double w) {
        name = new char[lab04_01_max_length];
        diameter = new double;
        weight = new double;
        memset(name, '\0', lab04_01_max_length);
        memcpy(name, n, strlen(n) * sizeof(char));
        (*diameter) = d;
        (*weight) = w;
    }
    ~pizza() {
        delete[] name;
        delete diameter;
        delete weight;
    }
};
#endif //  _LAB04_PIZZA_
