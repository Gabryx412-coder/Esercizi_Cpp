#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

double somma(double a, double b) { return a + b; }
double sottrazione(double a, double b) { return a - b; }
double moltiplicazione(double a, double b) { return a * b; }

bool divisione(double a, double b, double &risultato) {
    if (b == 0.0) return false;
    risultato = a / b;
    return true;
}

double leggiNumero(const string &prompt) {
    double val;
    while (true) {
        cout << prompt;
        if (cin >> val) {
            return val;
        } else {
            cout << "Input non valido. Per favore inserisci un numero (es. 3.14 o 5)\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int leggiScelta(int minOp, int maxOp) {
    int scelta;
    while (true) {
        cout << "Scegli un'opzione (" << minOp << "-" << maxOp << "): ";
        if (cin >> scelta) {
            if (scelta >= minOp && scelta <= maxOp) return scelta;
            cout << "Scelta fuori range. Riprova.\n";
        } else {
            cout << "Input non valido. Inserisci un numero intero.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    cout << "=== Calcolatrice base (C++) ===\n";

    bool continua = true;
    while (continua) {
        cout << "\nMenu:\n";
        cout << " 1) Somma\n";
        cout << " 2) Sottrazione\n";
        cout << " 3) Moltiplicazione\n";
        cout << " 4) Divisione\n";
        cout << " 5) Esci\n";

        int scelta = leggiScelta(1, 5);

        if (scelta == 5) {
            cout << "Uscita...\n";
            break;
        }

        double a = leggiNumero("Inserisci il primo numero: ");
        double b = leggiNumero("Inserisci il secondo numero: ");

        double res;
        switch (scelta) {
            case 1:
                res = somma(a, b);
                cout << "Risultato: " << a << " + " << b << " = " << res << "\n";
                break;
            case 2:
                res = sottrazione(a, b);
                cout << "Risultato: " << a << " - " << b << " = " << res << "\n";
                break;
            case 3:
                res = moltiplicazione(a, b);
                cout << "Risultato: " << a << " * " << b << " = " << res << "\n";
                break;
            case 4:
                if (divisione(a, b, res)) {
                    cout << "Risultato: " << a << " / " << b << " = " << res << "\n";
                } else {
                    cout << "Errore: divisione per zero non consentita.\n";
                }
                break;
            default:
                cout << "Opzione non riconosciuta.\n";
        }

        cout << "\nVuoi effettuare un'altra operazione? (s/n): ";
        char c;
        cin >> c;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (c == 'n' || c == 'N') continua = false;
    }

    cout << "Grazie per aver usato la calcolatrice.\n";
    return 0;
}
