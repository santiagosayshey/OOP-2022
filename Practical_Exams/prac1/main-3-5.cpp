#include <iostream>

extern double sum_even(double array[], int n) ;

int main() {

    double array[6]={1,2,3,4,5,6};

    std::cout << "sum of even elements is: " << sum_even(array, 6) << std::endl;
    return 0;

}