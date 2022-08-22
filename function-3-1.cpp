#include <iostream>

using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length) {

    bool equal = true;

    for (int i =0; i<length ; i++) {
        if (numbers1[i] != numbers2[i]) {
            equal = false;
        }
    }

    return equal;
}

int *readNumbers() {

    int* arr = new int[10];

    for (int i=0; i<10; i++) {
        cin >> arr[i];
    }
    return arr;
}
