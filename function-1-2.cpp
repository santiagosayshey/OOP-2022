// function to sum the elements of an array and find the average

double array_mean(int array[], int n) {
    
    // declare and intialise sum
    int sum = 0;
    double average = 0;

    // iterate through array n times
    for (int i=0; i<n; i++) {
        sum += array[i];
    }

    average = sum / n;

    return average;
}