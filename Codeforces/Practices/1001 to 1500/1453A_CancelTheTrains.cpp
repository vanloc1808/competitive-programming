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
#include <cmath>
#include <complex>
#include <bitset>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", s
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e15
#define Epsilon 1e-6

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> bottom;
        vector<int> left;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            bottom.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            left.push_back(x);
        }
        int maxValue = max(n, m);
        vector<bool> check(100 + 1, true);
        for (int i = 0; i < n; i++)
        {
            check[bottom[i]] = false;
        }
        int total(0);
        for (int i = 0; i < m; i++)
        {
            if (check[left[i]] == false)
            {
                total++;
            }
        }
        cout << total << "\n";
    }
    return 0;
}
