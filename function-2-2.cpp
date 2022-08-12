#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {

    int num = 0;
    int count = 1;

    for (int i = number_of_digits-1; i>=0; i--) {
        if (binary_digits[i]==1) {
            num += count;
        }
        count *= 2;
    }

    return num;
}