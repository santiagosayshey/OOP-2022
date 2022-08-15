#include <iostream>
#include <string>

using namespace std;

#include "student.h"

int main() {

    Student *a = new Student[5];

    for (size_t i =0; i < 5; i++) {
        cout << a[i].get_name() << endl;
    }
} 

Student a1[10]; // array of 10 students

Student* a2[10]; // a pointer to an unintialised array

Student* a3 = new Student[10]; // apointer to an array of 10 students