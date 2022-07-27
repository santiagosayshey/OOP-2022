// finds the largest element in an array

int max_element(int array[], int n) {

    if (n < 1) {
        return 0;
    }
 
    int big = array[0];

    for (int i=1 ; i<n ; i++) {

        if (array[i] > big) {

            big = array[i];
        } 
    }
    return big;
}