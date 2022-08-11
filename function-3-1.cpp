// determines if fan array is true

bool is_fanarray(int array[], int n) {
    bool fan1 = true;
    bool fan2 = true;

    for (int i=0 ; i<(n/2); i++) {
        if (array[i+1] < array[i]) {
            fan1 = false;
        }    
    }

    for(int i=n/2; i<n; i++) {
        if (array[i] < array[i+1]) {
            fan2=false;
        }
    }

    if (fan1==true && fan2==true) {
        return true;
    }
    else 
        return false;
}
    
