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
    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << "\n";
    }
    return 0;
}




