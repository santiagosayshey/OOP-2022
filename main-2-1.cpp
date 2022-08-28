#include "Capybara.h"
#include "Wagon.h"
#include <iostream>
#include <string>

int main() {
    
    Capybara a;
    Capybara b;
    Capybara c;
    Capybara d;
    Capybara e;

    Wagon w;

    w.addCapybara(a);
    w.addCapybara(b);
    w.addCapybara(c);
    w.addCapybara(d);
    w.addCapybara(e);

    return 0;
}