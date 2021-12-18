#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <concurrent_priority_queue.h>
#include <deque>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;

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
        if (n < 31)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            int check = n - 30;
            if (check != 14 && check != 10 && check != 6)
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << "\n";
            }
            else 
            {
                cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << "\n";
            } 
        }
    }
    return 0;
}
