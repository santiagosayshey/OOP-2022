#include <iostream>

using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main() {

    int array[] = {7,1,21,2,35};
    int *ptr  = array;
    int length = 5;
    multiples_of_seven(ptr,length);
}