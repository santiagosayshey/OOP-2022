

#include <iostream>

using namespace std;

int main() {
    short int a = 1;
    unsigned short int b = 1;
    unsigned int c =1;
    int d = 1;
    long int e = 1;
    unsigned long int f = 1;
    long long int g = 1;
    unsigned long long int h = 1;
    signed char i = 1;
    unsigned char j = 1;
    float k = 1;
    double l = 1;
    long double m = 1;
    wchar_t n = 1;

    cout << "size of short int = " << sizeof(a) << endl;
    cout << "size of unsigned short int = " << sizeof(b) << endl;
    cout << "size of unsigned int = " << sizeof(c) << endl;
    cout << "size of int = " << sizeof(d) << endl;
    cout << "size of long int = " << sizeof(e) << endl;
    cout << "size of unsigned long int = " << sizeof(f) << endl;
    cout << "size of long long int = " << sizeof(g) << endl;
    cout << "size of unsigned long long int = " << sizeof(h) << endl;
    cout << "size of signed char = " << sizeof(i) << endl;
    cout << "size of unsigned char = " << sizeof(j) << endl;
    cout << "size of float = " << sizeof(k) << endl;
    cout << "size of double = " << sizeof(l) << endl;
    cout << "size of long double = " << sizeof(m) << endl;
    cout << "size of wchar_t = " << sizeof(n) << endl;

    return 0;
}