#ifndef VEGIE_H
#define VEGIE_H

#pragma once

#include "animal.h"

class vegie : public animal
{
public:
    vegie(std::string n, int v);
    ~vegie();

    std::string get_favourite_food();
    void set_favourite_food(std::string food);

    std::string get_name();

private:
    std::string favourite_food;
    static int nextID;

};

#endif