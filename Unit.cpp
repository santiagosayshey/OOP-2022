#include "Unit.h"

Unit::Unit()
{
    unitValue=0;
    numBeds=0;
    unitSize=0;
} 
Unit::Unit(int unit_val, int num_beds, double unit_size)
{
    if (unit_val>0) {
        unitValue=unit_val;
    }
    else {
        unitValue=0;
    }

    if (num_beds>0) {
        numBeds=num_beds;
    }
    else {
        numBeds=0;
    }

    if (unit_size>0) {
        unitSize=unit_size;
    }
    else {
        unitSize=0;
    }
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
