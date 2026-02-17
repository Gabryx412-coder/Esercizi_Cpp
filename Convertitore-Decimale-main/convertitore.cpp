#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int numero;

    cout << "Inserisci un numero decimale: ";
    cin >> numero;

    cout << "Binario: " << bitset<32>(numero) << endl;
    cout << "Ottale: " << oct << numero << endl;
    cout << "Esadecimale: " << hex << numero << endl;

    return 0;
}
