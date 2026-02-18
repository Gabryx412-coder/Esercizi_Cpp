#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int pos = 0, neg = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 0)
            pos++;
        else
            neg++;
    }

    cout << "Positivi: " << pos << endl;
    cout << "Negativi: " << neg << endl;

    return 0;
}
