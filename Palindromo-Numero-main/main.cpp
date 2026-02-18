#include <iostream>
using namespace std;

int main()
{
    int n, temp, inv = 0;
    cin >> n;
    temp = n;

    while (temp > 0)
    {
        inv = inv * 10 + (temp % 10);
        temp /= 10;
    }

    if (n == inv)
        cout << "Palindromo";
    else
        cout << "Non palindromo";

    return 0;
}
