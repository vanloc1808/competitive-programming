#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    int a, b;
    while (T--)
    {
        cin >> a >> b;
        int Count = 0;
        int r = a % b;
        if (r == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            Count = b - r;
            cout << Count << "\n";
        }
    }
    return 0;
}
