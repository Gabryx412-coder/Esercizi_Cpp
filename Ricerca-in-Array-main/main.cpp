#include <iostream>
using namespace std;

int main()
{
    int v[10];
    int cerca;
    bool trovato = false;

    for (int i = 0; i < 10; i++)
        cin >> v[i];

    cout << "Numero da cercare: ";
    cin >> cerca;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] == cerca)
        {
            trovato = true;
            break;
        }
    }

    if (trovato)
        cout << "Trovato";
    else
        cout << "Non trovato";

    return 0;
}
