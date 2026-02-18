#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("numeri.txt");
    if (file.is_open())
    {
        for (int i = 1; i <= 10; i++)
        {
            file << i << endl;
        }
        file.close();
        cout << "File scritto.";
    }
    return 0;
}