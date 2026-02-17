#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo;
    int vocali = 0, consonanti = 0;

    cout << "Inserisci una stringa: ";
    getline(cin, testo);

    for (int i = 0; i < testo.length(); i++) {
        char c = tolower(testo[i]);
        if ((c >= 'a' && c <= 'z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vocali++;
            } else {
                consonanti++;
            }
        }
    }

    cout << "Numero di vocali: " << vocali << endl;
    cout << "Numero di consonanti: " << consonanti << endl;

    return 0;
}
