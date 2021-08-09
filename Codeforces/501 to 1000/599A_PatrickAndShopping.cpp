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

int findMinValue(int a, int b, int c, int d)
{
    int Min = a;
    if (b < Min)
    {
        Min = b;
    } 
    if (c < Min)
    {
        Min = c;
    }
    if (d < Min)
    {
        Min = d;
    }
    return Min;
}

int main()
{
    fastinout;
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int way1 = d1 + d2 + d3;
    int way2 = 2 * d1 + 2 * d2;
    int way3 = 2 * d1 + 2 * d3;
    int way4 = 2 * d2 + 2 * d3;
    int res = findMinValue(way1, way2, way3, way4);
    cout << res << "\n";
    return 0;
}
