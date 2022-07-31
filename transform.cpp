#include <iostream>

using namespace std;

int main() {

    int quotient = 56;
    int divisor=2;
    int binaryNum[32];
    int i=0;

    while (quotient != 0) {
        binaryNum[i] = quotient % divisor;
        i++;
        quotient /= divisor;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;

    return 0;
}