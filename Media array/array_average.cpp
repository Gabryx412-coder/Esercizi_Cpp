
#include <iostream>
using namespace std;

int main()
{
    int v[5];
    int somma = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        somma += v[i];
    }

    cout << "Media: " << somma / 5.0;
    return 0;
}
