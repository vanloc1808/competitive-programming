#include <iostream>
#include <vector>

using namespace std;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    fastinout;
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
        int oddNumber = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                oddNumber++;
            }
        }
        bool possible;
        if (oddNumber == 0)
        {
            possible = false;
        }
        else
        {
            if (oddNumber % 2 == 1)
            {
                possible = true;
            }
            else
            {
                if (n > oddNumber)
                {
                    possible = true;
                }
                else
                {
                    possible = false;
                }
            }
        }
        if (possible == true)
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