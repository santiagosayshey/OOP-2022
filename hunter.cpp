#include "hunter.h"

int hunter::nextID=1000;

hunter::hunter(std::string n, int v):
animal(n,v)
{
    kills=0;
    animalID=nextID;
    nextID++;
}

hunter::~hunter()
{
    
}

int hunter::get_kills()
{
    return kills;
}

void hunter::set_kills(int kills)
{
    this->kills=kills;
}

std::string hunter::get_name()
{
    return "Hunter: "+name;
}
