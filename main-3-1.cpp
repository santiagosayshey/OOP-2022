#include <iostream>
#include <string>

using namespace std;

extern int next_match_count(int vals[], int length);

int main () {
    int vals[] = {1,2,2,2,3,1,1,5,2,2};
    int vals2[] = {2,2,2,2,3,1,1,2,2,2};
    int len = 10;

    cout << next_match_count(vals,len) << endl;
    cout << next_match_count(vals2,len) << endl; 
    return 0;
}