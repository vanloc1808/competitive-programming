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

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n == 2 || n == 3)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int findNextPrimeNumber(int n)
{
    for (int i = n + 1;; i++)
    {
        if (isPrime(i) == true)
        {
            return i;
        }
    }
}

int main()
{
    fastinout;
    int n, m;
    cin >> n >> m;
    int nextOfN = findNextPrimeNumber(n);
    if (nextOfN == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
