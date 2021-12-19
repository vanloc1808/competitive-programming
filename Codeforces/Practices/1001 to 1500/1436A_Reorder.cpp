#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <algorithm>
#include <complex>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e15
#define Epsilon 1e-6

int main()
{
    fastinout;
    /* That sum equals the sum of all elements of the arrays*/
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll Sum(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Sum += x;
        }
        if (Sum == m)
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
