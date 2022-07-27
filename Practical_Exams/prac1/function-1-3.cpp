// function to count how many elements are the same as a desired number

int num_count(int array[], int n, int number) {
    
    // delcare and initialise count
    int count = 0;

    // iterate through array n times
    for (int i=0; i<n; i++) {
        
        // check whether current variable is the same as number
        if (array[i] == number ) {
            // if true, count++
            count += 1;
        }
    }

    return count;
}