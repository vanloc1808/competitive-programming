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
        if (n == 2)
        {
            cout << 2 << " " << 1 << "\n";
        }
        else
        {
            cout << n << " ";
            for (int i = 1; i < n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}