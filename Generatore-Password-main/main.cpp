#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int lunghezza;
    cin >> lunghezza;

    srand(time(0));

    for (int i = 0; i < lunghezza; i++)
    {
        int tipo = rand() % 3;
        if (tipo == 0)
            cout << char('a' + rand() % 26);
        else if (tipo == 1)
            cout << char('A' + rand() % 26);
        else
            cout << rand() % 10;
    }

    return 0;
}
