// determines if fan array is true

bool is_fanarray(int array[], int n) {
    bool fan1 = true;
    bool fan2 = true;

    for (int i=0 ; i<n/2 ; i++) {
        if (array[i+1] < array[i] || array[i] != array[n-i-1]) {
            fan1 = false;
        }    
    }

    for(int i=n; i<n/2; i--) {
        if (array[i-1] > array[i]) {
            fan2=false;
        }
    }

    if (fan1==true && fan2==true) {
        return true;
    }
    else 
        return false;
}
    
