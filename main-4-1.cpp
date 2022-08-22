#include <iostream>

using namespace std;

extern int *readNumbers() ;
extern int secondSmallestSum(int *numbers,int length);

int main() {

    int* numbers = readNumbers();
    cout << secondSmallestSum(numbers,10) << endl;

    delete[] numbers;
    return 0;
}