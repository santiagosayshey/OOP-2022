
#include "Wagon.h"


Wagon::Wagon() {};
Wagon::~Wagon() {};

bool Wagon::addCapybara(Capybara newCapy)
{
    if (space < 4) {
        names[space]=newCapy.getName();
        ages[space]=newCapy.getAge();
        
        space += 1;

        return 1;
    }
    else {
        return 0;
    }
}

void Wagon::emptyWagon()
{
    space = 0;
}

void Wagon::printCapybaras()
{
    for (int i = 0; i<space; i++) {
        std::cout << names[i] << " " << ages[i] << std::endl;
    }
}