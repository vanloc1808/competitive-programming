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
        int b[300];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int a[300];
        int jEven = 0, jOdd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i] = b[jEven];
                jEven++;
            }
            else
            {
                a[i] = b[n - 1 - jOdd];
                jOdd++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
