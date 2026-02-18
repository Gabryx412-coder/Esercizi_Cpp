#include <iostream>
using namespace std;

int main()
{
    float saldo = 1000;
    int scelta;
    float importo;

    do
    {
        cout << "\n1. Saldo";
        cout << "\n2. Prelievo";
        cout << "\n3. Deposito";
        cout << "\n0. Esci\n";
        cin >> scelta;

        if (scelta == 1)
        {
            cout << "Saldo: " << saldo;
        }
        else if (scelta == 2)
        {
            cin >> importo;
            if (importo <= saldo)
            {
                saldo -= importo;
                cout << "Prelievo effettuato";
            }
            else
            {
                cout << "Saldo insufficiente";
            }
        }
        else if (scelta == 3)
        {
            cin >> importo;
            saldo += importo;
            cout << "Deposito effettuato";
        }

    } while (scelta != 0);

    return 0;
}
