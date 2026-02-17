#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    double somma = 0;
    for (int i = 1; i <= n; i++) {
        double numero;
        cout << "Inserisci il numero " << i << ": ";
        cin >> numero;
        somma += numero;
    }

    double media = somma / n;
    cout << "La media dei numeri inseriti è: " << media << endl;

    return 0;
}
