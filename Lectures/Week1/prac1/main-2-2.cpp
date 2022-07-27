#include <iostream>

extern int max_element(int array[], int n);

int main() {
    
    int array[5]={5,900,-900,2,1};
    std::cout << "The largest is: " << max_element(array, 5) << std::endl;
    return 0;
}