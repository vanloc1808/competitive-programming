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

int min3Value(int a, int b, int c)
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
    return Min;
}

int min2Value(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    fastinout;
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int number256 = min3Value(k2, k5, k6);
    k2 -= number256;
    int number32 = min2Value(k2, k3);
    int res = 256 * number256 + 32 * number32;
    cout << res;
    return 0;
}

