#include <iostream>
#include "Capybara.h"

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
};