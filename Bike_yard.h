#ifndef BIKE_YARD_H
#define BIKE_YARD_H

#pragma once

#include "Bike.h"

class Bike_yard
{
public:
Bike_yard();                         // default constructor for yard with zero capacity
Bike_yard(int capacity);             // constructor for yard that can hold "capacity" bikes

int get_total_stock_count();         // count of the current number of bikes in yard
int get_stock_quantity(int code);    // count of the number of bikes with brand code equal to "code"
Bike *get_current_stock_list();      // gets an array containing all the bikes in the yard
bool add_stock(Bike b);              // tries to add bike to yard if there is enough spare capacity to fit it
                                     // then will return true. 
~Bike_yard();                        // destructor

private:
    int cap;
    int total;
    Bike *arr;
    int count;

};

#endif