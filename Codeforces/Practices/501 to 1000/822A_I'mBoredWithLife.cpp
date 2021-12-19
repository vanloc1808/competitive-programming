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

int minValue(int a, int b)
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

int findFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * findFactorial(n - 1);
    }
}

int main()
{
    fastinout;
    /*ideas: if a > b, b! always divides a!*/
    int A, B;
    cin >> A >> B;
    int minValue = min(A, B);
    int minValueFactorial = findFactorial(minValue);
    cout << minValueFactorial << "\n";
    return 0;
}

