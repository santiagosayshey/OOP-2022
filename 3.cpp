#include <iostream>

using namespace std;

void printer(int array[10][10]) {

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++) {
            cout << array[i][j];
            if (j<9) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print_class(string courses[4], string students[], int report_card[][4], int nstudents) {

    cout << "Report Card: ";
    for (int i = 0; i < 4; i++) {
        cout << courses[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < nstudents; i++) {
        cout << students[i] << " ";
        for (int j = 0; j<4; j++) {
            cout << report_card[i][j] << " ";
        }
        cout << endl;
    }

}


int main() {
    int array[10][10]={0};
    printer(array);
    string courses[] = {"Maths","History","Science","Geography"};
    string students[] = {"Sam","Dan","Blam","Can"};
    int report_card[][4] = {{1,2,3,4},
                            {5,6,7,8},
                            {1,3,5,7},
                            {2,4,6,8}};
    int report_card
    int nstudents = 4;
    print_class(courses,students,report_card,nstudents);

    return 0;
}