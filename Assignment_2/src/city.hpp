#ifndef _ASSIGNMENT_2_CITY_
#define _ASSIGNMENT_2_CITY_

#include <string.h>
#include <algorithm>

#define LENGTH_OF_NAME 25

struct city {
    char *city_name;
    char *country_name;
    double *latitude;
    double *longitude;

    city() {
        city_name = new char[LENGTH_OF_NAME + 1];
        country_name = new char[LENGTH_OF_NAME + 1];
        latitude = new double;
        longitude = new double;
        memset(city_name, '\0', LENGTH_OF_NAME * sizeof(char));
        memset(country_name, '\0', LENGTH_OF_NAME * sizeof(char));
    }

    city(char *ci_name, char *coun_name, double la, double lo) {
        city_name = new char[LENGTH_OF_NAME + 1];
        country_name = new char[LENGTH_OF_NAME + 1];
        latitude = new double;
        longitude = new double;
        memset(city_name, '\0', LENGTH_OF_NAME + 1);
        memset(country_name, '\0', LENGTH_OF_NAME + 1);
        memcpy(city_name, ci_name, std::min(LENGTH_OF_NAME, static_cast<int>(strlen(ci_name))) * sizeof(char));
        memcpy(country_name, coun_name, std::min(LENGTH_OF_NAME, static_cast<int>(strlen(coun_name))) * sizeof(char));
        (*latitude) = la;
        (*longitude) = lo;
    }

    ~city() {
        delete[] city_name;
        delete[] country_name;
        delete latitude;
        delete longitude;
    }
};


#endif