#include "Person.h"
#include "Airplane.h"

int main() {

    Person a(500,"Rooster");
    Person b(400,"Hangman");
    Person c(1000,"Maverick");

    Airplane plane("SR-71 Blackbird", a, b);

    plane.printDetails();

    plane.setPilot(c);
    plane.setCoPilot(a);

    plane.printDetails();

    return 0;
}