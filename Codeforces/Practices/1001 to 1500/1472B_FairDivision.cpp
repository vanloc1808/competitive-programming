#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile freopen_s(&fi,name."inp","r",stdin); freopen_s(&fo,    name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int oddNumber = 0, evenNumber = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                evenNumber++;
            }
            else
            {
                oddNumber++;
            }
        }
        if (evenNumber % 2 == 0)
        {
            if (oddNumber % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (oddNumber >= 2)
            {
                if ((oddNumber - 2) % 2 == 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
