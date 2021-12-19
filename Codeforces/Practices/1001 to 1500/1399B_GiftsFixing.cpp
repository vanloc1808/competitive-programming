#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int maxValue(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    const int abMax = 1e9;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> a;
        vector <int> b;
        int minA = abMax, minB = abMax;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (x < minA)
            {
                minA = x;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            if (x < minB)
            {
                minB = x;
            }
        }
        ll Count = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            temp = max(a[i] - minA, b[i] - minB);
            Count += temp;
        }
        cout << Count << "\n";
    }
    return 0;
}