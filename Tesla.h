#ifndef TESLA_H
#define TESLA_H

#pragma once

#include "Car.h"

class Tesla : public Car
{
public:
    Tesla();
    Tesla(char model, int price);

    void chargeBattery(int mins);

    char get_model();
    float get_batteryPercentage();

    void set_model(char model);
    void set_batteryPercentage(int p);

    void drive(int kms);

    ~Tesla();

private:
    char model;
    float batteryPercentage;
    static int nextVinNumber;

};


#endif