#include <iostream>
using namespace std;

int main()
{
    int n, somma = 0;
    cout << "Numero: ";
    cin >> n;

    while (n > 0)
    {
        somma += n % 10;
        n /= 10;
    }

    cout << "Somma cifre: " << somma;
    return 0;
}
