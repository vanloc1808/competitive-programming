#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    int a[101], b[101];
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> b[i];
    }
    if (p == n || q == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        bool check[101] = { false };
        for (int i = 1; i <= p; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i] == j)
                {
                    check[j] = true;
                    break;
                }
            }
        }
        for (int i = 1; i <= q; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (b[i] == j)
                {
                    check[j] = true;
                    break;
                }
            }
        }
        bool can = true;
        for (int i = 1; i <= n; i++)
        {
            if (check[i] == false)
            {
                can = false;
                break;
            }
        }
        if (can == true)
        {
            cout << "I become the guy.";
        }
        else
        {
            cout << "Oh, my keyboard!";
        }
    }
    return 0;
}