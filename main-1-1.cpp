#include "Bike.h"

#include <string>
#include <iostream>

int main() {

    Bike a;
    std::cout << a.get_brand() << std::endl;
    std::cout << a.get_code() << std::endl;

    Bike b("Nike", 40);
    std::cout << b.get_brand() << std::endl;
    std::cout << b.get_code() << std::endl;


    return 0;
}