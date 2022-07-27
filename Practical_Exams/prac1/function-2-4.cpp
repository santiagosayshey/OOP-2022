// determines if array is ascending

bool is_ascending(int array[], int n) {
    bool ascending = true;

    for (int i=1 ; i<n ; i++) {

        if (array[i] < array[i-1]) {
            ascending = false;
            return ascending;
        }

    }
    return ascending;
}