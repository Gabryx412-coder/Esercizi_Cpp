#include <iostream>
using namespace std;

int main()
{
    int v[10];

    for (int i = 0; i < 10; i++)
        cin >> v[i];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        cout << v[i] << " ";

    return 0;
}
