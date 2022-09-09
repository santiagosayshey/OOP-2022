#include "ApartmentBuilding.h"


    ApartmentBuilding::ApartmentBuilding()
    {
        cap = 10;
        arr = new Unit[capacity];
        totalUnits = 0;
    }

    ApartmentBuilding::ApartmentBuilding(int capacity)
    {
        cap = capacity;
        arr = new Unit[cap];
        totalUnits = 0;
    }

    int ApartmentBuilding::get_capacity()
    {
        return cap;
    }

    // returns the current number of units in the apartment building
    int ApartmentBuilding::get_current_number_of_units()
    {
        return totalUnits;
    } 

    // returns a dynamic array of the units in the apartment building
    Unit* ApartmentBuilding::get_contents()
    {
        return arr;
    }

    // returns true and adds unit to the condo if there is sufficient space
    // otherwise returns false
    bool ApartmentBuilding::add_unit(Unit unit)
    {
        if (totalUnits < cap) {
            arr[totalUnits] = unit;
            totalUnits++;
            return true;
        }
        else {
            return false;
        }
    }

    ApartmentBuilding::~ApartmentBuilding()
    {
        delete[] arr;
    }