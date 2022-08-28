#include "Capybara.h"
#include <iostream>
#include <string>

int main() {

    Capybara a;
    Capybara b;
    Capybara c;
    Capybara d;

    a.setName("Sam");
    std::cout << a.getName() << std::endl;

    a.setAge(21);
    std::cout << a.getAge() << std::endl;

    return 0;
}