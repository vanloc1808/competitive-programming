#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    char c[51][51];
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j++)
        {
            c[i][j] = '#';
        }
    }
    for (int i = 2; i <= n; i += 2)
    {
        int temp = i / 2;
        if (temp % 2 == 1)
        {
            for (int j = 1; j < m; j++)
            {
                c[i][j] = '.';
            }
            c[i][m] = '#';
        }
        else
        {
            c[i][1] = '#';
            for (int j = 2; j <= m; j++)
            {
                c[i][j] = '.';
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << c[i][j];
        }
        cout << "\n";
    }
    return 0;
}