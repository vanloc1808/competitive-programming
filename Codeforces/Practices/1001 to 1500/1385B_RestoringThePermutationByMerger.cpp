#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<bool> check;
        for (int i = 0; i <= n; i++)
        {
            check.push_back(false);
        }
        for (int i = 0; i < 2 * n; i++)
        {
            if (check[v[i]] == false)
            {
                cout << v[i] << " ";
                check[v[i]] = true;
            }
        }
        cout << "\n";
    }
    return 0;
}