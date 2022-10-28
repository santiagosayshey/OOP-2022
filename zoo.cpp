#include "zoo.h"

zoo::zoo(std::string n, int cows, int lions)
{
    this->name=n;
    this->number_of_animals=cows+lions;
    animals = new animal*[number_of_animals];

    for (int i =0; i<number_of_animals; i++)
    {
        if (i<cows)
        {
            animals[i] = new vegie("Daisy",100);
        }
        else
        {
            animals[i] = new hunter("Clarence",50);
        }
    }

}

zoo::~zoo()
{

}

std::string zoo::get_name()
{
    return name;
}

int zoo::get_number_of_animals()
{
    return number_of_animals;
}

animal** zoo::get_animals()
{
    return animals;
}