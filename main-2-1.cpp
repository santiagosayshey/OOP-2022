#include <iostream>
#include <string>

using namespace std;

extern string month_lookup(int month);

int main() {
    cout << month_lookup(1) << endl;
    cout << month_lookup(3) << endl;
    cout << month_lookup(4) << endl;
    cout << month_lookup(5) << endl;
    cout << month_lookup(7) << endl;
    cout << month_lookup(9) << endl;
    cout << month_lookup(110) << endl;
    return 0;
}