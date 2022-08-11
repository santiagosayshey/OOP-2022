#include<iostream>

using namespace std;

void print_binary_str(string number) {

    int dec = stoi(number);
    int binary[32];
    int i=0;

    while (dec != 0) {
        binary[i] = dec % 2;
        dec /= 2;
        i++;
    }
    for (int j =i-1; j>=0; j--) {
        cout << binary[j];
    }
    cout << endl;
}
int binary_to_int(int binary_digits[], int number_of_digits) {

    int dec = 0;
    int count =1;

    for (int i = number_of_digits-1; i>=0; i--) {
        if (binary_digits[i]==1) {
            dec += count;
        }
        count *=2;
    }

    return dec;
}

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

int array_min(int integers[], int length) {
    int min = integers[0];

    for (int i = 1; i<length; i++) {
        if (integers[i]<min) {
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length) {
    int max = integers[0];

    for (int i = 1; i<length; i++) {
        if (integers[i]>max) {
            max = integers[i];
        }
    }
    return max;
}

int sum_min_max(int integers[], int length) {

    int sum = 0;
    int min = array_min(integers,length);
    int max = array_max(integers,length);
    sum = sum + min + max;

    return sum;
}



int main() {

    int array[]={1,2,3,4,5};
    int binary[]={1,1,1,0,0,0};
    int num = 5;
    int binaryNum = 6;
    string number = "56";
    print_binary_str(number);
    cout << binary_to_int(binary,binaryNum) << endl;
    cout << sum_if_palindrome(array,num) << endl;
    cout << sum_min_max(array,num) << endl;


    return 0;
}