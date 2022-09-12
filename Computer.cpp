#include "Computer.h"

void Computer::move()
{
    

    // fill array
    for (int i = 0; i < 52; i++) {
        deck[i]=i+1;
    }
    // get a time-based seed
    unsigned seed = chrono::system_clock::now()
                        .time_since_epoch()
                        .count();

    // declare pointer to deck array
    int* pDeck = deck;

    // shuffle deck
}