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
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inoutfile freopen_s(*fi,"name.inp","r",stdin); freopen_s(*fo,"name.out","w",stdout)

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int available = 1;
        while (w % 2 == 0)
        {
            available *= 2;
            w /= 2;
        }
        while (h % 2 == 0)
        {
            available *= 2;
            h /= 2;
        }
        if (available >= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}


