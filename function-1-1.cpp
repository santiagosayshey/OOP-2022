#include <iostream>
#include <string>

using namespace std;

void print_ascending(int *vals, int len) {
    for (int i=0; i<len; i++) {
        cout << vals[i] << " ";
        
        if (vals[i] > vals[i+1]) {
            cout << endl;
            return;
        }

    }
    cout << endl;
}