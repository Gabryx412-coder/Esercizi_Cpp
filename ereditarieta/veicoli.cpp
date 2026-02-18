#include <iostream>
using namespace std;

class Veicolo
{
public:
    void accendi() { cout << "Veicolo acceso" << endl; }
};

class Auto : public Veicolo
{
public:
    void suonaClacson() { cout << "Beep beep" << endl; }
};

int main()
{
    Auto myCar;
    myCar.accendi();
    myCar.suonaClacson();
    return 0;
}