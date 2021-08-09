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

int main()
{
    int n;
    cin >> n;
    string a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if ((a[i][0] == 'O' && a[i][1] == 'O') || (a[i][3] == 'O' && a[i][4] == 'O'))
        {
            check = true;
            if (a[i][0] == 'O' && a[i][1] == 'O')
            {
                a[i][0] = '+';
                a[i][1] = '+';
            }
            else
            {
                a[i][3] = '+';
                a[i][4] = '+';
            }
            break;
        }
    }
    if (check == false)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\n";
        }
    }
    return 0;
}