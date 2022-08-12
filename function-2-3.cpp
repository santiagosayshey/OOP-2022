#include <iostream>
using namespace std;

int sum_integers(int integers[], int length) {

    int sum = 0;

    for (int i = 0; i<length; i++) {
        sum += integers[i];
    }

    return sum;
}

bool is_array_palindrome(int integers[], int length) {

    bool palindrome  = true;

    for (int i = 0; i<length/2; i++) {
        if (integers[i] != integers[length-i-1])
            palindrome=false;
    }

    return palindrome;
}

int palindrome_sum(int integers[], int length) {

    int sum = 0;
    bool palindrome = is_array_palindrome(integers,length);

    if (palindrome == false) {
        return -2;
    }
    else {
        sum = sum_integers(integers,length);
    }

    return sum;
}