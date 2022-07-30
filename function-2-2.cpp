#include <iostream>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {

    int count=1;
    int decimal = 0;

    for (int i = number_of_digits-1; i >= 0; i--) {
        if (binary_digits[i]==1) {
            decimal += count;
        }
        count *= 2;
    }
    return decimal;
}