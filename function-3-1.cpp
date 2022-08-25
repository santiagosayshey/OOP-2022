#include <iostream>
#include <string>

using namespace std;

int next_match_count(int vals[], int length) {
    int sum = 0;
    for (int i =0; i<length-1; i++) {
        if (vals[i]==vals[i+1]) {
            sum += 1;
        }
    }
    return sum;
}