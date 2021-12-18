#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int k;
        if (n % x == y)
        {
            cout << n << "\n";
        }
        else
        {
            int quotient = n / x;
            k = quotient * x + y;
            if (k <= n)
            {
                cout << k << "\n";
            }
            else
            {
                cout << k - x << "\n";
            }
        }
    }
    return 0;
}
