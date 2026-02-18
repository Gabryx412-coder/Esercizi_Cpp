#include <iostream>
using namespace std;

int main()
{
    int base, exp, risultato = 1;
    cin >> base >> exp;

    for (int i = 0; i < exp; i++)
        risultato *= base;

    cout << "Risultato: " << risultato;
    return 0;
}
