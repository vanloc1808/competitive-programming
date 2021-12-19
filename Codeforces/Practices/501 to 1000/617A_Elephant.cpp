#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int steps = 0;
    for (int i = 5; i > 0; i--)
    {
        steps += x / i;
        x = x % i;
    }
    cout << steps;
    return 0;
}


