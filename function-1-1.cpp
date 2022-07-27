// function to sum the elements of an array

int array_sum(int array[], int n) {
    
    // declare and intialise sum
    int sum = 0;

    // iterate through array n times
    for (int i=0; i<n; i++) {
        sum += array[i];
    }

    return sum;
}