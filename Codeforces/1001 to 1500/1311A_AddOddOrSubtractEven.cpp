#include <iostream>
#include <cmath>
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
        int a, b;
        cin >> a >> b;
        int result;
        int dist = abs(b - a);
        if (a == b)
        {
            result = 0;
        }
        else if (a > b)
        {
            if (dist % 2 == 0)
            {
                result = 1;
            }
            else
            {
                result = 2;
            }
        }
        else
        {
            if (dist % 2 == 0)
            {
                result = 2;
            }
            else
            {
                result = 1;
            }
        }
        cout << result << "\n";
    }
    return 0;
}