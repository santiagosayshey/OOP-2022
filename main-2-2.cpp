#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length) ;

int main() {

    int array[]={-500,-500,-500,-1,2};
    int length = 5;

    cout << max_sub_sum(array,length) << endl;
    return 0;
}