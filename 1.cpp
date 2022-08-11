#include<iostream>

using namespace std;

int min(int array[], int num) {

    int min = array[0];

    for (int i = 1; i<num; i++) {
        if (array[i]<min) {
            min = array[i];
        }
    }

    return min;
}

int max(int array[], int num) {

    int max = array[0];

    for (int i = 1; i<num; i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }

    return max;
}

void counter(int array[], int num) {
    int twos=0,fives=0,nines=0;
    for (int i = 0; i<num; i++) {
        switch(array[i]) {
            case 2:
                twos++;
                break;
            case 5:
                fives++;
                break;
            case 9:
                nines++;
                break;
        }
    }

    cout << "2:" << twos << ";" << "5:" << fives << ";" << "9:" << nines << ";" << endl;
}  

bool ascending(int array[], int num) {

    bool asc = true;

    for (int i =0; i<num-1; i++) {
        if (array[i]>array[i+1]) {
            asc=false;
        }
    }

    return asc;
}

bool descending(int array[], int num) {

    bool dsc = true;

    for (int i =0; i<num-1; i++) {
        if (array[i]<array[i+1]) {
            dsc=false;
        }
    }

    return dsc;
}


int main() {

    int array[]={1,2,3,4,5};
    int num = 5;

    cout << min(array,num) << endl;
    cout << max(array,num) << endl;
    counter(array,num);
    cout << ascending(array,num) << endl;
    cout << descending(array,num) << endl;
    


    return 0;
}