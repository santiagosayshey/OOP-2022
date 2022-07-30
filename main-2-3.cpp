#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {

    int integers[5]={1};
    int length=1;

    int sum = sum_if_palindrome(integers, length);

    cout << sum << endl;
    return 0;
}