#include "Bike.h"

    Bike::Bike()
    {
        brand = "";
        code = 0;
    }

    Bike::Bike(std::string brand, int code):
    brand(brand), code(code)
    {}

    std::string Bike::get_brand()
    {
        return brand;
    }
    int Bike::get_code()
    {
        return code;
    }
    Bike::~Bike() {}   