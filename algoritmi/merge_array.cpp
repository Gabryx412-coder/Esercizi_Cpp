#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int C[8];
    int i = 0, j = 0, k = 0;
    while (i < 4 && j < 4)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    while (i < 4)
        C[k++] = A[i++];
    while (j < 4)
        C[k++] = B[j++];
    for (int x = 0; x < 8; x++)
        cout << C[x] << " ";
    return 0;
}