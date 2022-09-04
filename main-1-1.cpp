#include "Musician.h"
#include <string>
#include <iostream>

int main()
{
    Musician pixies;
    std::cout << pixies.get_instrument() << std::endl;
    std::cout << pixies.get_experience() << std::endl;

    Musician dominic("guitar", 4);
    std::cout << dominic.get_instrument() << std::endl;
    std::cout << dominic.get_experience() << std::endl;

    return 0;
}