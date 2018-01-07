#include <iostream>

#include "cont.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    cont cont1(2, "Mihai", "Cornel", 234);
    cont1.afiseaza();

    return 0;
}
