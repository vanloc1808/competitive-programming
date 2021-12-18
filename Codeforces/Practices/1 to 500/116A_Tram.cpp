#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001], b[1001];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int maxValue = 0;
    int Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        Sum = Sum + b[i] - a[i];
        if (Sum > maxValue)
        {
            maxValue = Sum;
        }
    }
    cout << maxValue;
}


