#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string b;
    while (t--)
    {
        cin >> b;
        cout << b[0];
        for (int i = 1; i < b.length() - 1; i += 2)
        {
            cout << b[i];
        }
        cout << b[b.length() - 1];
        cout << "\n";
    }
    return 0;
}