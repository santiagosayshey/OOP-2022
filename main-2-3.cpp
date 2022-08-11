#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {

    int binary_digits[]={1,2,3,2,1};
    int number_of_digits=5;
    cout << sum_if_palindrome(binary_digits,number_of_digits) << endl;
    return 0;
}