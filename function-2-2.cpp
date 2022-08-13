#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length) {

    int maxSum=0;;
    int currentSum=0;
        for (int i = 0; i<length; i++) {
            for (int j = i; j<length; j++) {
                currentSum += *(nums+j);
                if (currentSum <= maxSum) {
                    break;
                }
                else {
                    maxSum=currentSum;
                }

            }
            currentSum=0;
        }
        return maxSum;
}