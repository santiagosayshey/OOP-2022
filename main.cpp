#include "zoo.h"
#include "sort_by_animalID.h"
#include "sort_by_name.h"

#include <iostream>

using namespace std;

int main()
{
    zoo* z = new zoo("taronga zoo",5,6);
    
    sort_by_name n;
    sort_by_animalID id;
    
    animal** arr = z->get_animals();

    for (int i = 0; i < z->get_number_of_animals(); i++)
    {
        cout << arr[i]->get_animalID() << endl;
    }

    cout << endl;
    cout << endl;

    n.sort(arr,z->get_number_of_animals());

    for (int i = 0; i < z->get_number_of_animals(); i++)
    {
        cout << arr[i]->get_animalID() << endl;
    }

    id.sort(arr,z->get_number_of_animals());

    for (int i = 0; i < z->get_number_of_animals(); i++)
    {
        cout << arr[i]->get_animalID() << endl;
    }
    
    
    return 0;
}