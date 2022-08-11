#include<iostream>
using namespace std;


int binToInt(int array[], int n){

    int count = 1;
    int decimal = 0;

    for (int i = n-1 ; i>=0; i--) {
        if (array[i]==1) {
            decimal += count;
        }
        count *= 2;
    }


    return decimal;
}

void intToBin(int number) {

    int bin[32];
    int i = 0;

    while (number != 0)  {
        bin[i]=number % 2;
        number /= 2;
        i++;
    }
    
    for (int j=i-1 ; j>=0 ; j--) {
        cout << bin[j];
    }
    cout << endl;

}

int main() {

    int array[] = {1,1};
    int n = 2;

    int decimal = binToInt(array,n);

    cout << decimal << endl << endl;

    int number = 3213;
    intToBin(number);
    return 0;
}