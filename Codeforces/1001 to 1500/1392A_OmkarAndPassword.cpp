#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
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
#include <cmath>
#include <complex>
#include <bitset>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) { a[i] = t; }
#define Inf 1e17
#define Mod 1000000007
#define Pi acos(-1.00)
#define Epsilon 1e-6

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
        sort(a.begin(), a.end());
        if (a[0] == a[n - 1])
        {
            cout << n << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}