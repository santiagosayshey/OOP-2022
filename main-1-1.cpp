#include <iostream>

using namespace std;
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main() {

    int n=3;
    string array[3][2]={{"Sam","Dan"},{"Clam","Ham"},{"Bam","Nam"}};

    string newArray[3][2];

    string_2d_copy(array,newArray,n);

    return 0;
}