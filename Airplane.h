#include <string>
#include <iostream>

class Airplane
{
    private:
        std::string callsign;
        Person pilot;
        Person coPilot;

    public:
        Airplane(std::string callsign, Person thePilot, Person theCoPilot):
        callsign(callsign),pilot(thePilot),coPilot(theCoPilot){ }

        ~Airplane() {}

        void setPilot(Person thePilot) {
            pilot = thePilot;
        }
        Person getPilot() {
            return pilot;
        }
        void setCoPilot(Person theCoPilot) {
            coPilot =  theCoPilot;
        }  
        Person getCoPilot() {
            return coPilot;
        }
        void printDetails() {
            std::cout << callsign << std::endl << pilot.getName() << std::endl << coPilot.getName() << std::endl;
        }               
                                            
};