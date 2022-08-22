#include <iostream>

using namespace std;

extern int *readNumbers() ;
extern int *reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {

    int* numbers1 = readNumbers();
    int* numbers2 = reverseArray(numbers1,10);

    cout << equalsArray(numbers1,numbers2,10) << endl; 
    
    delete[] numbers1, numbers2;
    return 0;
}