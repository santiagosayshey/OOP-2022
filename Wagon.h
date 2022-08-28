#ifndef _WAGON_H
#define _WAGON_H

#include <iostream>
#include "Capybara.h"
#include <string>

class Wagon
{

    private:
        int space=0;
        
    public:
        Wagon();
        ~Wagon();

        bool addCapybara(Capybara newCapy);

        void emptyWagon();

        void printCapybaras();

        std::string* names = new std::string[4];
        int* ages = new int[4];
};

#endif