#include <iostream>

int main() {
    double n;

    std::cout << "Scrivi un numero: ";
    std::cin >> n;

    double risultato = (n < 0) ? -n : n;

    std::cout << "Il valore assoluto di " << n << " Ã¨ " << risultato << " " << std::endl;

    return 0;
}
