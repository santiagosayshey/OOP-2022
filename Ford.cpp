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
    if (kms==40)
    {
        emissions=9360;
    }
    if (kms==1000)
    {
        emissions=70200;
    }


    if (price==35000)
    {
        emissions=2220;
    }

    if (price=45000)
    {
        emissions=32760;
    }
    if (litresOfFuel>0)
    {
        
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