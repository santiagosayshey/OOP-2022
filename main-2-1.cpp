#include "Wagon.h"

#include <iostream>
#include <string>

int main() {
    
    Capybara a;
    a.setName("sam");
    a.setAge(19);
    Capybara b;
    b.setName("bam");
    b.setAge(20);
    Capybara c;
    c.setName("ram");
    c.setAge(21);
    Capybara d;
    d.setName("dan");
    d.setAge(22);
    Capybara e;
    e.setName("ham");
    e.setAge(23);

    Wagon w;

    std::cout << w.addCapybara(a) << std::endl;
    std::cout << w.addCapybara(b) << std::endl;
    std::cout << w.addCapybara(c) << std::endl;
    std::cout << w.addCapybara(d) << std::endl;
    std::cout << w.addCapybara(e) << std::endl;


    return 0;
}