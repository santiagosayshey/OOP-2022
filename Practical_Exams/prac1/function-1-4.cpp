// function to add 2 arrays together

int sum_two_arrays(int array[], int secondarray[], int n) {
    
    // delcare and initialise count
    int sum = 0;

    // iterate through array n times
    for (int i=0; i<n; i++) {
        
        // add current variable to sum
        sum += (array[i] + secondarray[i]);

    }

    return sum;
}