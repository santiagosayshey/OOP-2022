#include <iostream>

extern int min_element(int array[], int n);

int main() {

    int array[5]={5,4,-900,2,1};
    std::cout << "The smallest is: " << min_element(array, 5) << std::endl;
    return 0;
}