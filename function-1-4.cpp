#include <iostream>

using namespace std;

void print_scaled(int arr[3][3],int scale) {
        for (int i = 0; i<3; i++) {
            for (int j = 0; j<3; j++) {
                cout << scale*arr[i][j];
                if (j<2) {
                    cout << " ";
                }
            }
            cout << endl;
        }

}