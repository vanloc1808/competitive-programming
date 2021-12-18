#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool color = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
            {
                color = true;
            }
        }
    }
    if (color == true)
    {
        cout << "#Color" << "\n";
    }
    else
    {
        cout << "#Black&White" << "\n";
    }
    return 0;
}