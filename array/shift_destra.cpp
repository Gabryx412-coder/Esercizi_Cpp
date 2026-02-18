#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Dimensione array: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i << ": ";
        cin >> arr[i];
    }
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    cout << "Array ruotato: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}