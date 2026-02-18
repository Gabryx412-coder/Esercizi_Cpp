#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    bool primo = true;

    if (n <= 1)
        primo = false;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                primo = false;
                break;
            }
        }
    }

    if (primo)
        cout << "Numero primo";
    else
        cout << "Non primo";

    return 0;
}
