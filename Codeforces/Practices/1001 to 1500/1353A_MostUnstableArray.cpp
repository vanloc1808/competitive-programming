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
        int n, m;
        cin >> n >> m;
        int result;
        if (n == 1)
        {
            result = 0;
        }
        else if (n == 2)
        {
            result = m;
        }
        else
        {
            result = 2 * m;
        }
        cout << result << "\n";
    }
    return 0;
}