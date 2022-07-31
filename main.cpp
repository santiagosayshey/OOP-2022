#include <iostream>

using namespace std;

extern void print_binary_str(int decimal);

int main() {

    int decimal;
    cout << "Enter a number: ";
    cin >> decimal;
    print_binary_str(decimal);


    return 0;
}