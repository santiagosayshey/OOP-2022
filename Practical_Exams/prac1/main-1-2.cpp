#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    int array[5]={1,1,1,1,3};
    std::cout << "The average is: " << array_mean(array, 5) << std::endl;
    return 0;
}