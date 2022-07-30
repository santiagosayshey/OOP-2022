#include <iostream>

using namespace std;

void count_digits(int arr[4][4]) {
    
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            switch (arr[i][j]) {
                case 0:
                    zero +=1;
                    break;
                case 1:
                    one +=1;
                    break;
                case 2:
                    two +=1;
                    break;
                case 3:
                    three +=1;
                    break;
                case 4:
                    four +=1;
                    break;
                case 5:
                    five +=1;
                    break;
                case 6:
                    six +=1;
                    break;
                case 7:
                    seven +=1;
                    break;
                case 8:
                    eight +=1;
                    break;
                case 9:
                    nine +=1;
                    break;
            }
        }
    }

    cout << "0:" << zero << ";"<< "1:" << one << ";"<< "2:" << two << ";"<< "3:" << three << ";"<< "4:" << four << ";"<< "5:" << five << ";"<< "6:" << six << ";"<< "7:" << seven << ";"<< "8:" << eight << ";"<< "9:" << nine << ";" << endl;


}