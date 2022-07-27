#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[9] = {4,5,6,7,11,6,8,7,5};
    std::cout << "Numbers in the array = 5: " << num_count(array, 9, 5) << std::endl;
    return 0;
}