#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>

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
        int n, m;
        cin >> n >> m;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        set<int> b;
        bool check = false;
        int res;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (a.count(x) > 0)
            {
                check = true;
                res = x;
            }
        }
        if (check == true)
        {
            cout << "YES\n";
            cout << 1 << " " << res << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}