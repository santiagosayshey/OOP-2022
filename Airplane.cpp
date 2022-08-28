#include "Airplane.h"

Airplane::Airplane(std::string callsign, Person thePilot, Person theCoPilot):
callsign(callsign),pilot(thePilot),coPilot(theCoPilot) {}

Airplane::~Airplane() {}

void Airplane::setPilot(Person thePilot) {
    pilot = thePilot;
}
Person Airplane::getPilot() {
    return pilot;
}
void Airplane::setCoPilot(Person theCoPilot) {
    coPilot =  theCoPilot;
}  
Person Airplane::getCoPilot() {
    return coPilot;
}
void Airplane::printDetails() {
    std::cout << callsign << std::endl << pilot.getName() << std::endl << coPilot.getName() << std::endl;
}  