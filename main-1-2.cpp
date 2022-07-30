#include <iostream>

using namespace std;

extern int is_identity(int arr[10][10]);

int main() {
    int arr[10][10];

    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (i == j ) {
                arr[i][j]=0;
            }
            else {
                arr[i][j]=1;
            }
        }
    }
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int identity = is_identity(arr);
    cout << identity << endl;
    return 0;
}