#include "Musician.h"

// a default constructor    
Musician::Musician():
instrument("Null"), experience(0) {}

// a constructor that takes the instrument played and the years of experience
Musician::Musician(std::string instrument, int experience):
instrument(instrument), experience(experience) {}


// returns the instrument played
std::string Musician::get_instrument() {return instrument;}

    // returns the number of years experience
int Musician::get_experience()  {return experience;}

// a default deconstructor
Musician::~Musician() {}