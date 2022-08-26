#include <iostream>
#include <string>

using namespace std;

extern bool is_more_positive(int vals[], int length);

int main() {

    int vals[] = {1,2,-1,-2,-5};

    bool pos = is_more_positive(vals,5);

    if (pos==true) {
        cout << "There are more postive numbers than negative numbers" << endl;
    }
    else {
        cout << "There are more negative numbers than postive numbers" << endl;
    }

    return 0;
}