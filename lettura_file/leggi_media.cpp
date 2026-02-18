#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("dati.txt");
    int val, somma = 0, count = 0;
    while (file >> val)
    {
        somma += val;
        count++;
    }
    file.close();
    if (count > 0)
        cout << "Media: " << (float)somma / count;
    else
        cout << "File vuoto o inesistente";
    return 0;
}