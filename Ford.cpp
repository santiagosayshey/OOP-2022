#include "Ford.h"

int Ford::nextVinNumber=2000002;

Ford::Ford()
{
    this->litresOfFuel=60;
    vinNumber=nextVinNumber;
    nextVinNumber++;
}

Ford::Ford(int badgeNumber, int price)
{
    this->badgeNumber=badgeNumber;
    this->price=price;
    this->litresOfFuel=60;
    vinNumber=nextVinNumber;
    nextVinNumber++;
}

void Ford::refuel(int litres)
{
    if (litresOfFuel+litres<60)
    {
        litresOfFuel+=litres;
    }
    else if (litresOfFuel+litres>60)
    {
        litresOfFuel=60;
    }
}

Ford::~Ford()
{

}

int Ford::get_badgeNumber()
{
    return badgeNumber;
}

float Ford::get_litresOfFuel()
{
    return litresOfFuel;
}

void Ford::set_badgeNumber(int b)
{
    this->badgeNumber=b;
}

void Ford::set_litresOfFuel(int l)
{
    this->litresOfFuel=l;
}

void Ford::drive(int kms)
{
    if (litresOfFuel>0)
    {
        emissions+=kms*234;
        if (litresOfFuel-0.2*kms>0)
        {
            litresOfFuel-=0.2*kms;
        }
        else if (litresOfFuel-0.2*kms<0)
        {
            litresOfFuel=0;
        }
    }
}