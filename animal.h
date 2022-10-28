#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

#include <string>

class animal
{
public:
    animal(std::string n, int v);
    ~animal();

    void set_name(std::string name);
    void set_volume(int volume);

    virtual std::string get_name() = 0;
    int get_animalID();
    int get_volume();

protected:
    std::string name;
    int animalID;
    int volume;

};

#endif