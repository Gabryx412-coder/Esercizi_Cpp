#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> coda;
    coda.push_back(1);
    coda.push_back(2);
    coda.push_back(3);

    while (!coda.empty())
    {
        cout << coda.front() << " ";
        coda.pop_front();
    }
    return 0;
}