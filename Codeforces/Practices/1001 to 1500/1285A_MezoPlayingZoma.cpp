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
    string s;
    cin >> s;
    int numberL = 0, numberR = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            numberL++;
        }
        else
        {
            numberR++;
        }
    }
    int res = numberL + numberR + 1;
    cout << res;
    return 0;
}

