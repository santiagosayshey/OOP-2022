#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician
{
public:
    // a default constructor    
    Musician();

    // a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);  

    // returns the instrument played
    std::string get_instrument();   

     // returns the number of years experience
    int get_experience();      
    
    // a default deconstructor
    ~Musician();

private:
    std::string instrument;
    int experience;

};

#endif