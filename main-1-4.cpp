#include <iostream>

using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main() {

    double array[]={1,2,3,4,5};
    double newArray[5];
    int length = 5;

    copy_doubles(array,newArray,length);
    return 0;
}