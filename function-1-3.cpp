#include <iostream>

using namespace std;

void copy_integers(int old_array[],int new_array[],int length) {

    int* ptr = old_array;
    int* ptr2 = new_array;

    for (int i = 0; i<length; i++) {
        *(ptr2+i)=*(ptr+i);
    }


}