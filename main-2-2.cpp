#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main () {

    int binary_digits[10]={1,1,0,1,0,1,1,0,1,0};
    int number_of_digits=10;
    int decimal = binary_to_int(binary_digits, number_of_digits);
    cout << decimal << endl;
    return 0;

}