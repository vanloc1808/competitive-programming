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
#define Nmax 26

int main()
{
    /*idea: can we divide the letters equally to n strings?*/
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<int> v(Nmax, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                v[s[i][j] - 'a']++;
            }
        }
        int check = true;
        for (int i = 0; i < Nmax; i++)
        {
            if (v[i] % n != 0)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}