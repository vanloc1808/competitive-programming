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

int sumOfDigit(int n)
{
    int Sum = 0;
    while (n != 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    return Sum;
}

int main()
{
    fastinout;
    int a;
    cin >> a;
    for (int i = a; ; i++)
    {
        if (sumOfDigit(i) % 4 == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
