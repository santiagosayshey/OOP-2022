#include <iostream>

extern void two_five_nine(int array[], int n);

int main(void) {
    int array[10]={1,2,2,2,3,4,5,5,7,9};
    two_five_nine(array, 10);
    return 0;
}