#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Inserisci un numero N: ";
    cin >> N;

    cout << "Numeri primi fino a " << N << ": ";
    for (int i = 2; i <= N; i++) {
        bool primo = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
