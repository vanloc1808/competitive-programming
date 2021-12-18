#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.push_back(x);
        }
        sort(s.begin(), s.end());
        int min = s[1] - s[0];
        for (int i = 1; i < n - 1; i++)
        {
            int temp = s[i + 1] - s[i];
            if (temp < min)
            {
                min = temp;
            }
        }
        cout << min << "\n";
    }
    return 0;
}