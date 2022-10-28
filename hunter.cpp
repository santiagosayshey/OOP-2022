#include "hunter.h"

int hunter::nextID=1000;

hunter::hunter(std::string n, int v):
animal(n,v)
{
    this->kills=0;
    animalID=nextID;
    nextID++;
}

hunter::~hunter()
{
    
}

std::string hunter::get_name()
{
    return "Hunter: "+this->name;
}

int hunter::get_kills()
{
    return this->kills;
}

void hunter::set_kills(int kills)
{
    this->kills=kills;
}
