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

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    if (b >= c && b >= a)
    {
        return b;
    }
    return c;
}


int main()
{
    fastinout;
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int chest(0), biceps(0), back(0);
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            chest += a[i];
        }
        else if (i % 3 == 1)
        {
            biceps += a[i];
        }
        else 
        {
            back += a[i];
        }
    }
    int maxValue = maxOfThree(chest, biceps, back);
    if (maxValue == chest)
    {
        cout << "chest\n";
    }
    else if (maxValue == biceps)
    {
        cout << "biceps\n";
    }
    else
    {
        cout << "back\n";
    }
    return 0;
}
