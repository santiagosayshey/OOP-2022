#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);

int main() {

    int binary_digits[]={1,2,3,2,1};
    int number_of_digits=5;
    cout << palindrome_sum(binary_digits,number_of_digits) << endl;
    return 0;
}