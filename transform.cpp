#include <iostream>

using namespace std;

int main() {

    int quotient = 56;
    int divisor=2;
    int temp[32];
    int binaryArr[32];
    int i=0;
    int h=0;

    while (quotient != 0) {
        temp[i] = quotient % divisor;
        i++;
        quotient /= divisor;
    }

    for (int j = i - 1; j >= 0; j--) {
        binaryArr[h]=temp[j];
        cout << binaryArr[h];
        h++;

    }
    cout << endl;

    return 0;
}