
#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {

    bool palindrome = true;

    for (int i = 0; i<length/2; i++ ) {
        if (integers[i] != integers[length-i-1]) {
            palindrome = false;
        }
    }
    return palindrome;
}

int sum_array_elements(int integers[], int length) {
    int sum=0;
    for (int i =0; i<length; i++) {
        sum += integers[i];
    }
    return sum;

}

int sum_if_palindrome(int integers[], int length) {
    bool palindrome = is_palindrome(integers,length);

    if (palindrome == false) {
        return -2;
    }
    else {
        int sum = sum_array_elements(integers,length);
        return sum;
    }
}