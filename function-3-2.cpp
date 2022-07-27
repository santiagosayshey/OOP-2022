// determines the median of a sorted array
#include <iostream>


int median_array(int array[], int n) {

	if ( (n%2 == 0) || (n < 1)) {
		return 0;
	}

    int median = array[n/2];
    return median;

}