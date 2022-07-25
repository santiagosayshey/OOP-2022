

double array_mean(int array[], int n) {
    double sum = 0.0;
    for (int i=0 ; i<n ; i++) {
        sum += array[i];
    }
    double average = sum / n;
    return average;
}