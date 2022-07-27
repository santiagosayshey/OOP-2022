// count to middle, check if ascending, then go in reverse for second half
#include <iostream>


extern bool is_fanarray(int array[], int n);

int main() {

    int array[5]={1,2,3,2,1};
    std::cout << "Fan array: " << is_fanarray(array,5) << std::endl;

    return 0;

}