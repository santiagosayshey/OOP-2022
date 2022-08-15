#include <iostream>

using namespace std;

int size_of_array_arr()  {
    int sum = 0;
    int* p = new int[3];
    
    for (int i = 0; i<3; i++) {
        sum += sizeof(*p);
    }

    return sum;

}
