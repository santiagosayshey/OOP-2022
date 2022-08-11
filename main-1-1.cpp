#include <iostream>
using namespace std;

extern void printer(int array[10][10]);

int main() {
    int array[10][10]={0};
    printer(array);
    return 0;
}