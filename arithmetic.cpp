#include <iostream>

using namespace std;

int main() {

    int count1=1;
    int decimal1 = 0;
    int binary_digits[6]={1,1,1,0,0,0};
    int number_of_digits=6;

    for (int i = number_of_digits-1; i >= 0; i--) {
        if (binary_digits[i]==1) {
            decimal1 += count1;
        }
        count1 *= 2;
    }
    cout << decimal1 << endl;

    int count2=1;
    int decimal2 = 0;
    int binary_digits2[9]={1,0,1,1,1,0,1,1};
    int number_of_digits2=9;

    for (int i = number_of_digits2-1; i >= 0; i--) {
        if (binary_digits2[i]==1) {
            decimal2 += count2;
        }
        count2 *= 2;
    }
    cout << decimal2 << endl;

    int trueDecimal = decimal1+decimal2;
    cout << trueDecimal << endl;

    return 0;
}