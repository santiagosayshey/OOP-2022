#include "Bike.h"
#include "Bike_yard.h"
#include <string>
#include <iostream>

int main() {

    Bike a("Adidas",30);
    Bike b("Nike", 30);
    Bike c("Jordan",50);

    Bike_yard byard;
    std::cout << byard.get_total_stock_count() << std::endl;
    std::cout << byard.get_stock_quantity(50) << std::endl;    
    std::cout << byard.add_stock(a) << std::endl;  

    Bike_yard byard2(2);
    std::cout << byard2.get_total_stock_count() << std::endl;
    std::cout << byard2.get_stock_quantity(50) << std::endl;    
    std::cout << byard2.add_stock(a) << std::endl;
    std::cout << byard2.add_stock(b) << std::endl;  
    std::cout << byard2.add_stock(c) << std::endl;    
    std::cout << byard2.get_total_stock_count() << std::endl;
    std::cout << byard2.get_stock_quantity(30) << std::endl;  
    std::cout << byard2.get_current_stock_list() << std::endl;  
    return 0;
}