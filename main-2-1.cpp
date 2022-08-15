#include <iostream>
#include <string>

using namespace std;

extern float arithmetic_ops(float left, float right, char op);

int main() {

    int left,right;
    char op;

    cout << "Enter a float: ";
    cin >> left;
    cout << endl;

    cout << "Enter another float: ";
    cin >> right;
    cout << endl;

    cout << "Enter an operator: ";
    cin >> op;
    cout << endl;

    cout << left << op << right << " is: " << arithmetic_ops(left,right,op) << endl;


}