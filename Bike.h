#ifndef BIKE_H
#define BIKE_H

#include <string>

#pragma once

class Bike
{
public:
    Bike();                             // default constructor - makes new bike with code number 0 and
                                        // and empty string "" for brand

    Bike(std::string brand, int code);  // constructor taking string representing brand
                                        // and integer representing code for that brand

    std::string get_brand();            // returns the brand of the bike
    int get_code();                     // returns the brand code number of bike
    ~Bike();                            // destructor

private:
    std::string brand;
    int code;

};

#endif