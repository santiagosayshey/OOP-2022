#include <iostream>
#include <string>

extern void print_ascending(int *vals, int len);

using namespace std;

int main() {
    int vals[] = {1,2,3,4,5,1};
    int len = 6;

    print_ascending(vals,len);
    return 0;
}