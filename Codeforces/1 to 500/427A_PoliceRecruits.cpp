#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    int policeAvailable = 0;
    int unTreated = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            policeAvailable += v[i];
        }
        else
        {
            if (policeAvailable == 0)
            {
                unTreated++;
            }
            else
            {
                policeAvailable--;
            }
        }
    }
    cout << unTreated;
    return 0;
}