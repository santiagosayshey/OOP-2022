
#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {

    int dec = 0;
    int count =1;

    for (int i = number_of_digits-1; i>=0; i--) {
        if (binary_digits[i]==1) {
            dec += count;
        }
        count *=2;
    }

    return dec;
}