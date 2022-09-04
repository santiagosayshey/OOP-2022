#include "Orchestra.h"

    // default constructor
    Orchestra::Orchestra():
    count(0) {
        arr = new Musician[5];
    }

    // constructor for an orchestra of given size        
    Orchestra::Orchestra(int size):
    count(size) {
        arr = new Musician[5];
    }

    // returns the number of musicians who have joined the orchestra
    int Orchestra::get_current_number_of_members() {
        return count;
    }

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool Orchestra::has_instrument(std::string instrument) { 
        for (int i=0 ; i<count ; i++) {
            if (arr[i].get_instrument() == instrument) {
                return true;
            }
        }
        return false;
    }

    // returns the array of members of the orchestra
    Musician *Orchestra::get_members() {
        return arr;
    }

    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool Orchestra::add_musician(Musician new_musician) {
        if (count < 5) {
            arr[count] = new_musician;
            count++;
            return true;
        }
        else {
            return false;
        }
    }

    // default deconstructor
    Orchestra::~Orchestra() {
        delete[] arr;
    }