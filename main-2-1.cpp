#include <iostream>

using namespace std;

extern void hexDigits(int *numbers,int length) ;

int main() {

    int array[10] ={11,12,3,4,15,6,7,8,9,10};

    hexDigits(array,10);

    return 0;
}