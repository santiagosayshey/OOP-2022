#include <iostream>
#include <string>

using namespace std;

string get_temp_phase(int temp) {

    if (temp < 274) {
        return "ice";
    }
    else if (temp > 273 && temp < 374) {
        return "liquid";
    }
    else if (temp > 373 && temp < 4701) {
        return "gas";
    }
    else {
        return "decomposed";
    }
    return 0;
}