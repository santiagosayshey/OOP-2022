#include "Bike_yard.h"

Bike_yard::Bike_yard()
{
    cap = 0;
    arr = new Bike[cap];
    total = 0;
    count = 0;
}

Bike_yard::Bike_yard(int capacity)
{
    cap = capacity;
    arr = new Bike[cap];
    total = 0;
    count = 0;
}

int Bike_yard::get_total_stock_count()
{
    return total;
}
int Bike_yard::get_stock_quantity(int code)
{
    for (int i = 0; i<total; i++) {
        if (arr[i].get_code() == code) {
            count++;
        }
    }
    return count;
}
Bike* Bike_yard::get_current_stock_list()
{
    return arr;
}
bool Bike_yard::add_stock(Bike b)
{
    if (total < cap) {
        arr[total] = b;
        total++;
        return true;
    }
    else {
        return false;
    }
}
Bike_yard::~Bike_yard()
{
    delete[] arr;
}

