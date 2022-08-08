#include <iostream>

using namespace std;
extern void print_class(string courses[4], string students[], int report_card[][4], int nstudents);

int main () {

    string courses[4]={"OOP","Maths","Physics","English"};
    string students[]={"Sam", "Dan", "Clam", "Bam"};
    int report_card[][4]={{10,10,10,10},{10,8,5,1},{5,4,7,8},{5,6,7,1}};
    int nstudents=4;

    print_class(courses,students,report_card,nstudents);
}