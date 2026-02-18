#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Quanti numeri? ";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i * 2;
        cout << p[i] << " ";
    }
    delete[] p;
    return 0;
}