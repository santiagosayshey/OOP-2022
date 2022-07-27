// determines weighted average of an array
#include <iostream>

double weighted_average(int array[], int n) {
    int count;
    double wAve = 0;
    for (int i=0 ; i < n ; i++) {
        count=0;
        for (int j=0 ; j < n ; j++) {
            if (array[i]==array[j]) {
                count++;
            }
        }
        wAve += ((1.0*array[i]*count)/n);
    }
    return wAve;
}