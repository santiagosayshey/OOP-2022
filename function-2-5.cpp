// determines if array is descending

bool is_descending(int array[], int n) {
    bool descending = true;

    for (int i=1 ; i<n ; i++) {

        if (array[i] > array[i-1]) {
            descending = false;
            return descending;
        }

    }
    return descending;
}