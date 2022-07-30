#include <iostream>

using namespace std;

int is_identity(int arr[10][10]) {

    bool ones=true;
    bool zeroes=true;
    
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (i == j ) {
                if (arr[i][j]!=1) {
                    ones=false;
                }
            }
            else {
                if (arr[i][j]!=0) {
                    zeroes=false;
                }
            }
        }
    }

    if (ones==true && zeroes==true) {
        return 1;
    }
    else {
        return 0;
    }

}