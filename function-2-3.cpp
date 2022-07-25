// finds the count of nums 2,5 and 9

#include <iostream>

void two_five_nine(int array[], int n) {
    int twoCount=0;
    int fiveCount=0;
    int nineCount=0;

    for (int i=0 ; i<n ; i++) {
        int num = array[i];

        switch (num) {
            
            case 2: 
                twoCount++;
                break;
            case 5:
                fiveCount++;
                break;
            case 9:
                nineCount++;
                break;
        }

    }
    std::cout <<"2:"<<twoCount<<","<<"5:"<<fiveCount<<","<<"9:"<<nineCount<<"\n";
    return;
}