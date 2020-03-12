#ifndef _LAB04_CANDYBAR_
#define _LAB04_CANDYBAR_
#include <string>
const int lab04_02_maxrange = 1024;
struct CandyBar {
    char* name;
    double* weight;
    int* calories;
    CandyBar() {
        name = new char[lab04_02_maxrange];
        memset(name, '\0', lab04_02_maxrange);
        weight = new double;
        calories = new int;
    }
    CandyBar(char* n, double d, double w) {
        name = new char[lab04_02_maxrange];
        weight = new double;
        calories = new int;
        memset(name, '\0', lab04_02_maxrange);
        memcpy(name, n, strlen(n) * sizeof(char));
        (*weight) = d;
        (*calories) = w;
    }
    ~CandyBar() {
        delete[] name;
        delete weight;
        delete calories;
    }
};
#endif //!_LAB04_CANDYBAR_