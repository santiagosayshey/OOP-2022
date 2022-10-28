#ifndef CAR_H
#define CAR_H

#pragma once

class Car
{
public:
    Car();
    Car(int price);
    ~Car();

    int get_price();
    int get_vinNumber();
    int get_emissions();

    void set_price(int price);
    void set_vinNumber(int number);
    void set_emissions(int emissions);

    virtual void drive(int kms) = 0;

protected:
    int price=20000;
    int vinNumber;
    int emissions;

};

#endif