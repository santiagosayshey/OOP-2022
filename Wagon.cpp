#include "Wagon.h"


Wagon::Wagon() {};
Wagon::~Wagon() {};

bool Wagon::addCapybara(Capybara newCapy)
{
    if (space < 3) {
        Capybara newCapy;
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
    
}