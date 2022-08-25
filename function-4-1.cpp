#include <iostream>
#include <string>

using namespace std;

int * matrix_min_max(int **vals, int num_rows, int num_cols) {
    int *arr = new int[2];
    arr[0] = vals[0][0];
    arr[1] = vals[0][0];

    for (int i=0; i<num_rows; i++) {
        for (int j =0; j<num_cols; j++) {
            if (vals[i][j]>arr[1]) {
                arr[1] = vals[i][j];
            }
            if (vals[i][j]<arr[0]) {
                arr[0] = vals[i][j];
            }
        }
    }
    return arr;
}