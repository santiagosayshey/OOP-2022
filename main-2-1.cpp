#include <iostream>

using namespace std;

extern void hexDigits(int *numbers,int length) ;
extern int *readNumbers() ;

int main() {

    int* numbers = readNumbers();
    hexDigits(numbers,10);

    return 0;
}