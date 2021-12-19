#include <iostream>
#include <cmath>
using  namespace std;

int maxValue(int a, int b, int c)
{
    int Max = a;
    if (b > Max)
    {
        Max = b;
    }
    if (c > Max)
    {
        Max = c;
    }
    return Max;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int Sum = a + b + c + n;
        if (Sum % 3 == 0 && Sum / 3 >= maxValue(a, b, c))
        {
            cout << "YES\n";
        }
        else
        {
            cout <<"NO\n";
        }

    }
    return 0;
}