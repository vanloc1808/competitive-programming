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
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inoutfile freopen_s(*fi,"name.inp","r",stdin); freopen_s(*fo,"name.out","w",stdout)

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

int minValue3(int a, int b, int c)
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

int main()
{
    fastinout;

    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i] - 'a' + 1);
    }
    int totalRotates = 0;
    totalRotates += minValue(abs(v[0] - 1), abs(v[0] - 26) + 1);
    for (int i = 0; i < v.size() - 1; i++)
    {
        totalRotates += minValue3(abs(v[i + 1] - v[i]), abs(v[i + 1] - 26) + v[i], abs(v[i] - 26) + v[i + 1]);
    }
    cout << totalRotates;
    return 0;
}
