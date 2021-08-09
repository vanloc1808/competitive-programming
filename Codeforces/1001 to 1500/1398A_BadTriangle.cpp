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

void solve(vector<int> v)
{
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[v.size() - 1] >= v[0] + v[i])
        {
            cout << 1 << " " << i + 1 << " " << v.size() << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        solve(v);
    }
    return 0;
}