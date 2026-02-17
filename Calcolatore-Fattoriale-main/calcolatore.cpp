#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long fattoriale = 1;

    cout << "Inserisci un numero per calcolare il fattoriale: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        fattoriale = fattoriale * i;
    }

    cout << "Il fattoriale di " << numero << " è: " << fattoriale << endl;

    return 0;
}
