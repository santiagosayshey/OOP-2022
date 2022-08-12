#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);

int main () {

    int array[]={1,2,3,2,1};
    int length = 5;
    cout << palindrome_sum(array,length) << endl;

    return 0;
}