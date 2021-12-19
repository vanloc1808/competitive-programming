/* 91-year anniversary of the foundation of Communist Party of Vietnam
03/02/1930 - 03/02/2021 */

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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if ((y - x) % (a + b) == 0)
        {
            cout << (y - x) / (a + b) << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
