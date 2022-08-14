#include <iostream>

using namespace std;

void copy_doubles(double *old_array,double *new_array,int length) {

    double* ptr = old_array;
    double* ptr2 = new_array;

    for (int i = 0; i<length; i++) {
        *(ptr2+i)=*(ptr+i);
    }


}