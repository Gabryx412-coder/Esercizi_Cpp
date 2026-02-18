#include <iostream>
#include <string>
using namespace std;

int main()
{
    string testo;
    int chiave;
    cout << "Testo: ";
    cin >> testo;
    cout << "Chiave: ";
    cin >> chiave;
    for (int i = 0; i < testo.length(); i++)
    {
        testo[i] = testo[i] + chiave;
    }
    cout << "Cifrato: " << testo << endl;
    return 0;
}