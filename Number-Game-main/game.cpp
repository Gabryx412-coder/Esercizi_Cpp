#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSegreto = rand() % 100 + 1;
    int tentativo;
    int tentativi = 0;

    cout << "Benvenuto al gioco Indovina il Numero!" << endl;
    cout << "Ho scelto un numero tra 1 e 100. Prova a indovinarlo!" << endl;

    do {
        cout << "Inserisci il tuo tentativo: ";
        cin >> tentativo;
        tentativi++;

        if (tentativo < numeroSegreto) {
            cout << "Troppo basso!" << endl;
        } else if (tentativo > numeroSegreto) {
            cout << "Troppo alto!" << endl;
        } else {
            cout << "Complimenti! Hai indovinato il numero " << numeroSegreto 
                 << " in " << tentativi << " tentativi." << endl;
        }
    } while (tentativo != numeroSegreto);

    return 0;
}
