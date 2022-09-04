#include "Musician.h"
#include "Orchestra.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

    Orchestra o;
    Musician a("Guitar", 5);
    Musician b("Drums", 3);
    Musician c("Bass", 10);
    Musician d("Trombone", 50);
    Musician e("Violin", 10);
    Musician f("Saxophone", 100);
    
    cout << o.get_current_number_of_members() << endl;
    cout << o.add_musician(a) << endl;
    cout << o.add_musician(b) << endl;
    cout << o.add_musician(c) << endl;
    cout << o.add_musician(d) << endl;
    cout << o.add_musician(e) << endl;
    cout << o.add_musician(f) << endl;

    cout << o.get_current_number_of_members() << endl;


    cout << o.has_instrument("Guitar") << endl;
    cout << o.has_instrument("Drums") << endl;
    cout << o.has_instrument("Flute") << endl;

    return 0;
}