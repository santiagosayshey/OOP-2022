#include <iostream>

using namespace std;

int secondSmallestSum(int *numbers,int length) {

    int sum;
    // use gauss' formula to find the sum of all positive numbers before n
    // this gives the size of the array of sums

    int size = (length*length+length)/2;
    int arr[size];
    int a =0;

    // get all sums
    for (int i = 0; i< length; i++) {
        sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            arr[a]=sum;
            a++;
        }
    }


    // quick sort array
    for(int i=0;i<size;i++) {		
		for(int j=i+1;j<size;j++) {
			if(arr[i]>arr[j]) {
				int temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

    // return second smallest
    return arr[1];
}

int *readNumbers() {

    int* arr = new int[10];

    for (int i=0; i<10; i++) {
        cin >> arr[i];
    }
    return arr;
}