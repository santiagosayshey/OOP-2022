#include "animal.h"


animal::animal(std::string m, int v)
{
    this->name = m;
    this->volume = v;
}

animal::~animal()
{
    
}

int animal::get_animalID()
{
    return animalID;
}

int animal::get_volume()
{
    return volume;
}

void animal::set_name(std::string name)
{
    this->name = name;
}

void animal::set_volume(int volume)
{
    this->volume = volume;
}



