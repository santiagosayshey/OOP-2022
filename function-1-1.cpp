#include <iostream>
#include <string>

using namespace std;

int *array_pad(int *vals, int len) {

    int* arr = new int[len+2];

    arr[0]=vals[0];
    arr[len+1]=vals[len-1];

    for (int i=0; i<len;i++) {
        arr[i+1]=vals[i];
    }

    for (int i=0; i<len+2;i++) {
        cout << arr[i] << endl;
    } 

    return arr;
}