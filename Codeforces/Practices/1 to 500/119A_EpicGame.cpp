#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile freopen_s(&fi,name."inp","r",stdin); freopen_s(&fo,    name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int greatestCD(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    fastinout;
    int a, b, n;
    cin >> a >> b >> n;
    int turn = 0;
    while (n > 0)
    {
        turn++;
        if (turn % 2 == 1)
        {
            n -= greatestCD(a, n);
        }
        else
        {
            n -= greatestCD(b, n);
        }
    }
    turn--;
    if (turn % 2 == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}