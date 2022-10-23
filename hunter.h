#ifndef HUNTER_H
#define HUNTER_H

#pragma once

#include "animal.h"

class hunter : public animal
{
public:
    hunter(std::string n, int v);
    ~hunter();

    int get_kills();
    void set_kills(int kills);

    std::string get_name();

private:
    int kills;
    static int nextID;

};

#endif