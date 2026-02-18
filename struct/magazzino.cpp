#include <iostream>
using namespace std;

struct Prodotto
{
    string nome;
    float prezzo;
    int quantita;
};

int main()
{
    Prodotto magazzino[5];
    for (int i = 0; i < 2; i++)
    {
        cout << "Nome: ";
        cin >> magazzino[i].nome;
        cout << "Prezzo: ";
        cin >> magazzino[i].prezzo;
        cout << "Qta: ";
        cin >> magazzino[i].quantita;
    }
    float totale = 0;
    for (int i = 0; i < 2; i++)
    {
        totale += magazzino[i].prezzo * magazzino[i].quantita;
    }
    cout << "Valore totale magazzino: " << totale << endl;
    return 0;
}