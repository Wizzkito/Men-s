//Programa de menú con switch
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int num;

    do {
    cout << "Menu\n";
    cout << "1. Torta $20.00\n";
    cout << "2. Palomitas $10.00\n";
    cout << "3. Agua $15.00\n";
    cout << "Seleccione una opción\n";
    cin >> num;

switch (num)
{
case 1:
    cout << "Son $20.00";
    break;
case 2:
    cout << "Son $10.00";
    break;
case 3:
    cout << "Son $15.00";
    break;
default:
    break;
}

    } while (num != 4);

}