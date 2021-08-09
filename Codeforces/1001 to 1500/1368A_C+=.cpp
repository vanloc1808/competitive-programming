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

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        //đem số nhỏ đi cộng với số lớn
        if (a < b)
        {
            swap(a, b);
        }
        int steps = 0;
        while (a <= n)
        {
            b += a;
            steps++;
            if (a < b)
            {
                swap(a, b);
            }
        }
        cout << steps << "\n";
    }
    return 0;
}
