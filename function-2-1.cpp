#include <iostream>
#include <string>

using namespace std;

float add_op(float left, float right) {
    return left+right;
}

float subtract_op(float left, float right) {
    return left-right;
}

float multiply_op(float left, float right) {
    return left*right;
}

float divide_op(float left, float right) {
    return left/right;
}


float arithmetic_ops(float left, float right, char op) {
    switch (op) {
        case '+':
            return add_op(left,right);
        case '-':
            return subtract_op(left,right);
        case '*':
            return multiply_op(left,right);
        case '/':
            return divide_op(left,right);
    }
    return 0;
}
