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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                int j = i;
                while (j + 1 < s.length() && s[j + 1] == '1')
                {
                    j++;
                }
                v.push_back(j - i + 1);
                i = j;
            }
        }
        sort(v.rbegin(), v.rend());
        int res = 0;
        for (int i = 0; i < v.size(); i += 2)
        {
            res += v[i];
        }
        cout << res << "\n";
    }
    return 0;
}
