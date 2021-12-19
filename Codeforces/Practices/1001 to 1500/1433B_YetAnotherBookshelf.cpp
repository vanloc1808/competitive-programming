#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <deque>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;

#define name ""
#define inoutFile freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1. 00)
#define Inf 1e17

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int Count = 0;
        vector<int> satisfied;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            else
            {
                satisfied.push_back(i);
            }
        }
        if (satisfied.size() == 1)
        {
            Count = 0;
        }
        else
        {
            for (int i = 0; i < satisfied.size() - 1; i++)
            {
                Count += satisfied[i + 1] - satisfied[i] - 1;
            }
        }
        cout << Count << "\n";
    }
    return 0;
}