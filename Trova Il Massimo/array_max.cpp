
#include <iostream>
using namespace std;

int main()
{
    int v[5];
    for (int i = 0; i < 5; i++)
        cin >> v[i];

    int max = v[0];
    for (int i = 1; i < 5; i++)
        if (v[i] > max)
            max = v[i];

    cout << "Massimo: " << max;
    return 0;
}
