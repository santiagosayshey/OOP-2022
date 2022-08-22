#include <iostream>

using namespace std;

extern void hexDigits(int *numbers,int length) ;
extern int *readNumbers() ;

int main() {

    int* numbers = readNumbers();
    hexDigits(numbers,10);

    return 0;
}


  /*   //  declare current max
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
    return ar */