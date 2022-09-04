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

    w.addCapybara(a);
        w.printCapybaras();
        std::cout << std::endl;
    w.addCapybara(b);
        w.printCapybaras();
        std::cout << std::endl;
    w.addCapybara(c);
        w.printCapybaras();
        std::cout << std::endl;
    w.addCapybara(d);
        w.printCapybaras();
        std::cout << std::endl;
    w.emptyWagon();
    w.addCapybara(e);
        w.printCapybaras();
        std::cout << std::endl;
    return 0;
}

