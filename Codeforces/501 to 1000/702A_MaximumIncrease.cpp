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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int Count = 1, Max = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            Count++;
        }
        else
        {
            Max = max(Count, Max);
            Count = 1;
        }
    }
    Max = max(Count, Max);
    cout << Max;
    return 0;
}