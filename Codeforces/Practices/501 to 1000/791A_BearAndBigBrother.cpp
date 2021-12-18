#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int yearNeeded = 1;
    while (a * pow(3, yearNeeded) <= b * pow(2, yearNeeded))
    {
        yearNeeded++;
    }
    cout << yearNeeded;
    return 0;
}


