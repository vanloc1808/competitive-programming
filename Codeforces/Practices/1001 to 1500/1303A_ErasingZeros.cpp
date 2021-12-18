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
        string s;
        cin >> s;
        int left = -1, right = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                left = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                right = i;
                break;
            }
        }
        int ans = 0;
        if (left == -1 || right == -1)
        {
            ans = 0;
        }
        else
        {
            for (int i = left; i <= right; i++)
            {
                if (s[i] == '0')
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

