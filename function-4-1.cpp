#include <iostream>

using namespace std;

int secondSmallestSum(int *numbers,int length) {

    int sum;
    int arr[(length*length+length)/2];
    int a =0;

    for (int i = 0; i< length; i++) {
        sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            arr[a]=sum;
            a++;
        }

    }

    return arr[1];
}

int *readNumbers() {

    int* arr = new int[4];

    for (int i=0; i<4; i++) {
        cin >> arr[i];
    }
    return arr;
}