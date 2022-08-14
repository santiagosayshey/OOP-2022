#include <iostream>

using namespace std;

int size_of_variable_star_arr()  {

    int* p = new int[3];

    delete[] p;
    return sizeof(p);

}