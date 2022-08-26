#include "function-4-1.h"

ModCounter::ModCounter(int init,int bound) {
    boundary=bound;

    if (init > -1 && init < boundary+1 ) {
        current_val = init;
    }
    else {
        current_val = 0;
    }
}

void ModCounter::increment() {
    if (current_val != boundary) {
        current_val++;
    }
    else {
        current_val=0;
    }
}

void ModCounter::decrement() {
    if (current_val != 0) {
        current_val--;
    }
    else {
        current_val=boundary;
    }
}

int ModCounter::get_val() {
    return current_val;
}