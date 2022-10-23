#include "vegie.h"

int vegie::nextID=100;

vegie::vegie(std::string n, int v):
animal(n,v)
{
    favourite_food="grass";
    animalID=nextID;
    nextID++;
    

}

vegie::~vegie()
{
    
}

std::string vegie::get_favourite_food()
{
    return favourite_food;
}

void vegie::set_favourite_food(std::string favourite_food)
{
    this->favourite_food=favourite_food;
}

std::string vegie::get_name()
{
    return "Safe: "+name;
}
