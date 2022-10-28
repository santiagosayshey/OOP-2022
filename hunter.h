#ifndef HUNTER_H
#define HUNTER_H

#pragma once

#include "animal.h"

class hunter : public animal
{
public:
    hunter(std::string n, int v);
    ~hunter();

    std::string get_name();

    int get_kills();
    void set_kills(int kills);



private:
    int kills;
    static int nextID;

};

#endif