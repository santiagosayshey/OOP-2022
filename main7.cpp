#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class Point 
{
    public:
        int x;
        int y;
        float operator() (Point p2) {
            return sqrt(pow(x-p2.x,2)+pow(x-p2.y,2));
        }
    private:

};

typedef map<string,int> StudentRecords;
typedef pair<string, int> Entry;

int main()
{

    Point p1 = {10,50};
    Point p2 = {0,5};

    float dist = p1(p2);

    cout << dist << endl;

    
    return 0;
}