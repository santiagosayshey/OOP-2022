#include <iostream>

using namespace std;

extern void count_digits(int arr[4][4]);

int main() {
    int arr[4][4];

    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            arr[i][j]=i+j+1;
        }
    }
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    count_digits(arr);

    return 0;
}