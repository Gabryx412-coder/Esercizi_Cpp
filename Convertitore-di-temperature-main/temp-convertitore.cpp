#include <iostream>
#include <limits>

using namespace std;

double celsiusToFahrenheit(double c) { return (c * 9.0 / 5.0) + 32.0; }
double celsiusToKelvin(double c) { return c + 273.15; }
double fahrenheitToCelsius(double f) { return (f - 32.0) * 5.0 / 9.0; }
double fahrenheitToKelvin(double f) { return (f - 32.0) * 5.0 / 9.0 + 273.15; }
double kelvinToCelsius(double k) { return k - 273.15; }
double kelvinToFahrenheit(double k) { return (k - 273.15) * 9.0 / 5.0 + 32.0; }

double leggiNumero(const string &prompt) {
    double val;
    while (true) {
        cout << prompt;
        if (cin >> val) return val;
        cout << "Input non valido. Inserisci un numero.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int leggiScelta(int minOp, int maxOp) {
    int scelta;
    while (true) {
        cout << "Scegli un'opzione (" << minOp << "-" << maxOp << "): ";
        if (cin >> scelta && scelta >= minOp && scelta <= maxOp) return scelta;
        cout << "Scelta non valida. Riprova.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "=== Convertitore di Temperature (C++ ) ===\n";

    bool continua = true;
    while (continua) {
        cout << "\nMenu:\n";
        cout << " 1) Celsius -> Fahrenheit\n";
        cout << " 2) Celsius -> Kelvin\n";
        cout << " 3) Fahrenheit -> Celsius\n";
        cout << " 4) Fahrenheit -> Kelvin\n";
        cout << " 5) Kelvin -> Celsius\n";
        cout << " 6) Kelvin -> Fahrenheit\n";
        cout << " 7) Esci\n";

        int scelta = leggiScelta(1, 7);
        if (scelta == 7) {
            cout << "Uscita...\n";
            break;
        }

        double input = leggiNumero("Inserisci la temperatura: ");
        double res;

        switch (scelta) {
            case 1: res = celsiusToFahrenheit(input); cout << input << " °C = " << res << " °F\n"; break;
            case 2: res = celsiusToKelvin(input); cout << input << " °C = " << res << " K\n"; break;
            case 3: res = fahrenheitToCelsius(input); cout << input << " °F = " << res << " °C\n"; break;
            case 4: res = fahrenheitToKelvin(input); cout << input << " °F = " << res << " K\n"; break;
            case 5: res = kelvinToCelsius(input); cout << input << " K = " << res << " °C\n"; break;
            case 6: res = kelvinToFahrenheit(input); cout << input << " K = " << res << " °F\n"; break;
        }

        cout << "\nVuoi effettuare un'altra conversione? (s/n): ";
        char c;
        cin >> c;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (c == 'n' || c == 'N') continua = false;
    }

    cout << "Grazie per aver usato il convertitore.\n";
    return 0;
}
