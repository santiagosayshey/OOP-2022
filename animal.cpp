#include "animal.h"

animal::animal(std::string n, int v)
{
    this->name=n;
    this->volume=v;
}

animal::~animal()
{
    
}

void animal::set_name(std::string name)
{
    this->name=name;
}

void animal::set_volume(int volume)
{
    this->volume=volume;
}


int animal::get_animalID()
{
    return animalID;
}

int animal::get_volume()
{
    return volume;
}
