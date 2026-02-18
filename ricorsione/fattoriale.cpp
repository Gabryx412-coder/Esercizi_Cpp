#include <iostream>
using namespace std;

long fattoriale(int n)
{
    if (n == 0)
        return 1;
    return n * fattoriale(n - 1);
}

int main()
{
    int num;
    cout << "Numero: ";
    cin >> num;
    cout << "Fattoriale: " << fattoriale(num);
    return 0;
}