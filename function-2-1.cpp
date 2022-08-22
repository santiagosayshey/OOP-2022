#include <iostream>

using namespace std;

void hexDigits(int *numbers,int length) {

    for (int i = 0; i<length; i++) {
        cout << i << " " << numbers[i] << " ";
        switch (numbers[i]) {
            case 10:
                cout << "A" << endl;
                break;
            case 11:
                cout << "B" << endl;
                break;
            case 12:
                cout << "C" << endl;
                break;
            case 13:
                cout << "D" << endl;
                break;
            case 14:
                cout << "E" << endl;
                break;
            case 15:
                cout << "F" << endl;
                break;
            default:
                cout << numbers[i] << endl;
                break;

        }
    }

}

int *readNumbers() {

    int* arr = new int[10];

    for (int i=0; i<10; i++) {
        cin >> arr[i];
    }
    return arr;
}