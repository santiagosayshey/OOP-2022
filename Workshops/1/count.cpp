#include <iostream>

// count function
int count(int array[], int n) {
    // initialise int count
    int count = 0;

    // iterate through array
    for (int i = 0; i < n; i++) { 

        // check if current iteration is even
        if (array[i]%2 == 0) {
            
            // increase count by 1
            count += 1;
        }
    }

    return count;
}