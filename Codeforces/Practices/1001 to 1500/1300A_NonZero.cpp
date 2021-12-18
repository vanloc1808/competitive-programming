#include <iostream>
#include <vector>
#include <set>
#include <concurrent_priority_queue.h>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name."inp", "r", stdin); freopen_s(&fo, name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
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
        int Sum(0), zero(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (x == 0)
            {
                zero++;
            }
            Sum += x;
        }
        int res;
        if (zero == 0)
        {
            if (Sum == 0)
            {
                res = 1;
            }
            else
            {
                res = 0;
            }
        }
        else
        {
            Sum += zero;
            if (Sum == 0)
            {
                res = zero + 1;
            }
            else
            {
                res = zero;
            }
        }
        cout << res << "\n";
    }
    return 0;
}


