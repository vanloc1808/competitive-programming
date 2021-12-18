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
        int n;
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << 1 << "\n";
        }
        else if (n == 3 || n == 4)
        {
            cout << 2 << "\n";
        }
        else
        {
            int ans = n / 2;
            if (n % 2 == 1)
            {
                ans++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}