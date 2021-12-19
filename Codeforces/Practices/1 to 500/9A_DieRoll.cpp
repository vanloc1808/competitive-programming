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

int findGcd(int a, int b)
{
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

int maxValue(int a, int b)
{
    if (a >= b)
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
    int Y, W;
    cin >> Y >> W;
    int Max = maxValue(Y, W);
    int available = 6 - Max + 1;
    int Gcd = findGcd(available, 6);
    int numera = available / Gcd;
    int denomi = 6 / Gcd;
    cout << numera << "/" << denomi;
    return 0;
}