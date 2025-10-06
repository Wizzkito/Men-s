// Menú con if-else
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
do {
    //Menú que se mostrará
    cout << "Menu\n";
    cout << "1. Torta $20.00\n";
    cout << "2. Palomitas $10.00\n";
    cout << "3. Agua $15.00\n";
    cout << "Seleccione una opción\n";
    cin >> num;

    if (num == 1)
    cout << "Son $20.00";
    else if (num == 2)
    cout << "Son $10.00";
    else if (num == 3)
    cout << "Son $15.00";

    } while (num != 4);
    
    return 0;
}