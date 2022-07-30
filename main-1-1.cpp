#include <iostream>

using namespace std;

extern int sum_diagonal(int arr[4][4]);

int main() {
    int arr[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int sum = sum_diagonal(arr);
    cout << sum << endl;
    return 0;
}