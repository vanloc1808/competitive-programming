#include <iostream>
using namespace std;

int minValue(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    int number;
    cout << minValue(a, b) << " ";
    if (a == minValue(a, b))
    {
        number = (b - a) / 2;
    }
    else
    {
        number = (a - b) / 2;
    }
    cout << number;
    return 0;
}