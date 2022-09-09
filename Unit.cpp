#include "Unit.h"

Unit::Unit()
{
    unitValue=0;
    numBeds=0;
    unitSize=0;
} 
Unit::Unit(int unit_val, int num_beds, double unit_size)
{
    unitValue=unit_val;
    numBeds=num_beds;
    unitSize=unit_size;
}

int Unit::get_num_bedrooms()
{
    return numBeds;
}
int Unit::get_value()
{
    return unitValue;
}
double Unit::get_area()
{
    return unitSize;
}
