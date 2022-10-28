#ifndef FLEET_H
#define FLEET_H

#pragma once

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

class Fleet
{
public:
   static Fleet* createFleet(int authority);

    void addCar(Car *car);  // Adds a car to the fleet
    Car **get_fleet();      // Returns the array of pointers to the five Car objects
    int get_count();        // Returns the amount of cars added to the fleet


private:
    Fleet(); 
    /* creates a  fleet containing pointers to 5 Car objects as an array; 
    These Car objects could be either Teslas or Fords, and in any order
    */

    Car** fleet;
    int count;

};

#endif