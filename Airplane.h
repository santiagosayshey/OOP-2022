#ifndef _AIRPLANE_H
#define _AIRPLANE_H

#include <string>
#include <iostream>
#include "Person.h"

class Airplane
{
    private:
        std::string callsign;
        Person pilot;
        Person coPilot;

    public:
        Airplane(std::string callsign, Person thePilot, Person theCoPilot);
        ~Airplane();

        void setPilot(Person thePilot);
        Person getPilot();
        void setCoPilot(Person theCoPilot);
        Person getCoPilot();
        void printDetails();         
                                            
};

#endif