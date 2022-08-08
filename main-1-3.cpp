#include <iostream>

using namespace std;
extern void classprint(string courses[4], string students[4], int report_card[4][4], int nstudents);

int main () {

    string courses[4]={"OOP","Maths","Physics","English"};
    string students[]={"Sam", "Dan", "Clam", "Bam"};
    int nstudents=4;

    int report_card[4][4];

    for (int i=0; i<4; i++) {
        cout <<  "Enter " << students[i] << "'s grades: " << endl;
        for (int j=0; j<4; j++) {
            cout << courses[j] << ": ";
            cin >> report_card[i][j];
        }
        cout << endl;
    }

    classprint(courses,students,report_card,nstudents);

    return 0;
}