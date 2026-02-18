#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *next;
};

int main()
{
    Nodo *testa = new Nodo();
    testa->dato = 1;
    testa->next = new Nodo();
    testa->next->dato = 2;
    testa->next->next = NULL;

    Nodo *temp = testa;
    while (temp != NULL)
    {
        cout << temp->dato << " -> ";
        temp = temp->next;
    }
    return 0;
}