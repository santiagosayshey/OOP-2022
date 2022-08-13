#include <iostream>

using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main() {

    int array[]={1,2,3,4,5};
    int newArray[5];
    int length = 5;

    copy_integers(array,newArray,length);
    return 0;
}