// function to count number of evens between 1 and int 'n'

int count_evens(int number) {
    
    // delcare and initialise count
    int count = 0;

    // iterate through array n times, starting from 1
    for (int i=1; i<number+1; i++) {
        
        // check if even
        if (i%2 == 0) {
            // add to count
            count += 1;
        }

    }

    return count;
}