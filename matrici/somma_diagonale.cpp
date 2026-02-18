#include <iostream>
using namespace std;

int main()
{
    int mat[10][10];
    int n, somma = 0;
    cout << "Dimensione matrice quadrata: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (i == j)
                somma += mat[i][j];
        }
    }
    cout << "Somma diagonale: " << somma << endl;
    return 0;
}