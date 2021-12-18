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
        int n;
        cin >> n;
        vector<int> x;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            x.push_back(k);
        }
        set<fl> area;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                fl tempS = 0.5f * (x[j] - x[i]);
                area.insert(tempS);
            }
        }
        cout << area.size() << "\n";
    }
    return 0;
}