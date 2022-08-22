#include <iostream>

using namespace std;

int secondSmallestSum(int *numbers,int length) {

    //  declare current max
    int maxCurrent = 0;

    // array to store sums
    int* arr = new int[length];

    // using kadane's algorithm
    for (int i = 0; i<length; i++) {
        
        maxCurrent=max(*(numbers+i),maxCurrent+(*(numbers+i)));
        arr[i]=maxCurrent;
    }

    // sort sums array
    for(int i=0;i<length;i++) {		
        for(int j=i+1;j<length;j++) {
            if(arr[i]>arr[j]) {
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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