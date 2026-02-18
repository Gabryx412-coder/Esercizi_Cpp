#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string cognome, codice = "";
    cout << "Inserisci il cognome: ";
    cin >> cognome;
    int count = 0;
    for (int i = 0; i < cognome.length() && count < 3; i++)
    {
        char c = toupper(cognome[i]);
        if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            codice += c;
            count++;
        }
    }
    while (codice.length() < 3)
    {
        codice += 'X';
    }
    cout << "Codice parziale: " << codice << endl;
    return 0;
}