#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 1;
    std::cout << "even numbers between 1 and 10: " << count_evens(number) << std::endl;
    return 0;
}