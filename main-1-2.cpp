#include <iostream>

extern int array_mean(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,11};
    std::cout << "The average is: " << array_mean(array, 5) << std::endl;
    return 0;
}