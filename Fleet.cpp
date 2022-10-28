#include "Fleet.h"

Fleet::Fleet()
{
    fleet = new Car*[5];
    count=0;
}

void Fleet::addCar(Car *car)
{
    if (count < 5)
    {
        fleet[count]= car;
        count++;
    }
        
}

Car** Fleet::get_fleet()
{
    return fleet;
}

int Fleet::get_count()
{
    return count;
}
Fleet* Fleet::createFleet(int authority)
{
    if (authority>10)
    {
        Fleet* a;
        return a;
    }
    else
    {
        return nullptr;
    }
}
