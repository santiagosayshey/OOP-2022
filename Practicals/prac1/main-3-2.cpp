#include <iostream>
#include <algorithm>

extern int median_array(int array[], int n);
int main() {

    int array[5]={5,2,1,3,4};
    std::cout << "Median is: " << median_array(array,5) << std::endl;

    return 0;

}