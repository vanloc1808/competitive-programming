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
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;
        int hamburger, chickenburger;
        if (h >= c)
        {
            hamburger = min(b / 2, p);
            b -= 2 * hamburger;
            chickenburger = min(b / 2, f);
        }
        else
        {
            chickenburger = min(b / 2, f);
            b -= 2 * chickenburger;
            hamburger = min(b / 2, p);
        }
        int total = hamburger * h + chickenburger * c;
        cout << total << "\n";
    }
    return 0;
}
