#include <iostream>

using namespace std;

void print_binary_str(string decimal_number) {

    int quotient = stoi(decimal_number);
    int divisor=2;
    int remainder;
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
}