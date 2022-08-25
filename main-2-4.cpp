#include <iostream>
#include <string>

using namespace std;

extern float multiply_op(float left, float right);
extern float divide_op(float left, float right);
extern float subtract_op(float left, float right);
extern float add_op(float left, float right);

extern float arithmetic_ops(float left, float right, float (*op)(float,float));

int main() {

    int left,right;
    int op;

    cout << "Enter a float: ";
    cin >> left;
    cout << endl;

    cout << "Enter another float: ";
    cin >> right;
    cout << endl;

    cout << left << " * " << right << " is: " << arithmetic_ops(left,right,multiply_op) << endl;

}

