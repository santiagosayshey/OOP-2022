#include "zoo.h"

zoo::zoo(std::string n,int cows,int lions)
{
    this->number_of_animals=cows+lions;
    this->name=n;

    animals = new animal*[number_of_animals];
    
    for (int i = 0; i < number_of_animals; i++)
    {
        
        if (i<cows)
        {
            vegie* v = new vegie("Daisy",100);
            animals[i]=v;
        }
            
        else
        {
            hunter* h = new hunter("Clarence",50);
            animals[i]=h;
        }
            
    }
    

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
