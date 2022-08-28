#include "Person.h"
#include <iostream>
#include <string>

int main() {

    Person a(21,"Sam");
    Person b(22,"Dan");
    Person c(23,"Bam");
    Person d(24,"Clam");

    std::cout << a.getName() << std::endl;
    a.setName("Dan");
    std::cout << a.getName() << std::endl;

    std::cout << a.getSalary() << std::endl;
    a.setSalary(22);
    std::cout << a.getSalary() << std::endl;

    return 0;
}