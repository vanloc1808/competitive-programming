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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int result;
        if (n % 2 == 0 && m % 2 == 0)
        {
            result = n * m / 2;
        }
        else
        {
            if (n % 2 == 1 && m % 2 == 1)
            {
                result = n * (m - 1) / 2 + (n + 1) / 2;
            }
            else
            {
                if (n % 2 == 0 && m % 2 == 1)
                {
                    result = n * (m - 1) / 2 + n / 2;
                }
                else
                {
                    result = (n - 1) * m / 2 + m / 2;
                }
            }
        }
        cout << result << "\n";
    }
    return 0;
}