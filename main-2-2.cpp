#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main () {

    int array[] = {1,1,1,0,0,0};
    int number_of_digits=6;
    int num = bin_to_int(array,number_of_digits);
    cout << num << endl;
    return 0;
}