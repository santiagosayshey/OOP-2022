
#include <iostream>

int main() {

    // good practice to intialise variables as soon as you declare them
    int a=0 , b=0 , c=0;

    std::cout << "Enter a:\n";
    std::cin >> a;

    std::cout << "Enter b:\n";
    std::cin >> b;

    c = a + b;

    std::cout <<"a+b = " << c << std::endl;

    return 0;

}