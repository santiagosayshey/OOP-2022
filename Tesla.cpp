#include "Tesla.h"

int Tesla::nextVinNumber=1000001;

Tesla::Tesla()
{
    batteryPercentage=100;
    vinNumber=nextVinNumber;
    nextVinNumber++;
}

Tesla::Tesla(char model, int price)
{
    batteryPercentage=100;
    this->model=model;
    vinNumber=nextVinNumber;
    nextVinNumber++;
}

void Tesla::chargeBattery(int mins)
{
    if (batteryPercentage+mins*0.5<100)
    {
        batteryPercentage+=mins*0.5;
    }

    else if (batteryPercentage+mins*0.5>100)
    {
        batteryPercentage=100;
    }
}

char Tesla::get_model()
{
    return model;
}

float Tesla::get_batteryPercentage()
{
    return batteryPercentage;
}

void Tesla::set_model(char model)
{
    this->model=model;
}

void Tesla::set_batteryPercentage(int p)
{
    this->batteryPercentage=p;
}

void Tesla::drive(int kms)
{
    if (batteryPercentage>0)
    {
        emissions+=kms*74;
        if (batteryPercentage-0.2*kms>0)
        {
            batteryPercentage-=0.2*kms;
        }
        else if (batteryPercentage-0.2*kms<0)
        {
            batteryPercentage=0;
        }
    }

}

Tesla::~Tesla()
{

}