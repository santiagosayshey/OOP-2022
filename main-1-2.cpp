#include "Unit.h"
#include "ApartmentBuilding.h"

#include <iostream>

int main() {

    ApartmentBuilding a(3);
    Unit aa;
    Unit bb;
    Unit cc;
    Unit dd;

    std::cout << a.add_unit(aa) << std::endl;
    std::cout << a.add_unit(bb) << std::endl;
    std::cout << a.add_unit(cc) << std::endl;
    std::cout << a.add_unit(dd) << std::endl;

    std::cout << a.get_capacity() << std::endl;
    std::cout << a.get_current_number_of_units() << std::endl;
    return 0;
}