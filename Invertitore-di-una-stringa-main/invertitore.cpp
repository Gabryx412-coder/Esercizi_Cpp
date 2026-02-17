#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo, testoInvertito = "";

    cout << "Inserisci una stringa: ";
    getline(cin, testo);

    for (int i = testo.length() - 1; i >= 0; i--) {
        testoInvertito += testo[i];
    }

    cout << "Stringa invertita: " << testoInvertito << endl;

    return 0;
}
