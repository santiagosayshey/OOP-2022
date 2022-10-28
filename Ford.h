#ifndef FORD_H
#define FORD_H

#pragma once

#include "Car.h"

class Ford : public Car
{
public:
    Ford();            
    Ford(int badgeNumber, int price);  

    void refuel(int litres);

    ~Ford();

    int get_badgeNumber();
    float get_litresOfFuel();

    void set_badgeNumber(int b);
    void set_litresOfFuel(int l);

    void drive(int kms);

private:
    int badgeNumber;
    float litresOfFuel;      // Initially 60L
    static int nextVinNumber;
};

#endif