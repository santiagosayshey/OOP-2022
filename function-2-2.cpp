#include <iostream>

using namespace std;

int max_sub_sum(int *nums, int length) {

    // using kadane's algorithm

    int maxCurrent = 0;
    int maxActual = 0;

    for (int i = 0; i<length; i++) {
        
        maxCurrent=max(*(nums+i),maxCurrent+(*(nums+i)));

        if (maxCurrent > maxActual) {
            maxActual = maxCurrent;
        }
    }

    return maxActual;

}