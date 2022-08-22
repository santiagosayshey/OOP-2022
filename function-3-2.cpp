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

int *reverseArray(int *numbers1,int length) {

    int* numbers2 = new int[10];
    int j=0;

    for (int i=9; i>= 0; i--) {
        numbers2[j]=numbers1[i];
        j++;
    }
    return numbers2;
}


int *readNumbers() {

    int* arr = new int[10];

    for (int i=0; i<10; i++) {
        cout << "Enter number: " << i+1 << " ";
        cin >> arr[i];
    }
    return arr;
}
