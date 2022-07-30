#include <iostream>

using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {

    int integers[5]={1,2,3,4,1000};
    int length=5;

    int sum = sum_min_max(integers, length);

    cout << sum << endl;
    return 0;
}