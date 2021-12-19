#include <iostream>
#include <vector>
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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<bool> check;
        for (int i = 0; i < n; i++)
        {
            check.push_back(true);
        }
        int wrongEven = 0, wrongOdd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                check[i] = false;
                if (i % 2 == 0)
                {
                    wrongEven++;
                }
                else
                {
                    wrongOdd++;
                }
            }
        }
        int steps;
        if (wrongEven != wrongOdd)
        {
            steps = -1;
        }
        else
        {
            steps = wrongEven;
        }
        cout << steps << "\n";
    }
    return 0;
}