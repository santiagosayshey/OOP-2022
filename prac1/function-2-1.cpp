// finds the smallest element in an array

int min_element(int array[], int n) {

    if (n < 1) {
        return 0;
    }
 
    int small = array[0];

    for (int i=1 ; i<n ; i++) {

        if (array[i] < small) {

            small = array[i];
        } 
    }
    return small;
}