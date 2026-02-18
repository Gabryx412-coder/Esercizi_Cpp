#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int pari = 0, dispari = 0;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            pari++;
        else
            dispari++;
    }

    cout << "Pari: " << pari << endl;
    cout << "Dispari: " << dispari << endl;

    return 0;
}
