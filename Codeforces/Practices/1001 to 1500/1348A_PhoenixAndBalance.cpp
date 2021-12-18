#include <iostream>
#include <vector>
#include <cmath>
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
        for (int i = 1; i <= n; i++)
        {
            int x = (int)pow(2, i);
            v.push_back(x);
        }
        int aSum = 0, bSum = 0;
        aSum += v[n - 1];
        for (int i = 0; i < n / 2 - 1; i++)
        {
            aSum += v[i];
        }
        for (int i = n / 2 - 1; i < n - 1; i++)
        {
            bSum += v[i];
        }
        int diff = abs(aSum - bSum);
        cout << diff << '\n';
    }
    return 0;
}
