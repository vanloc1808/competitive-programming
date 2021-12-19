#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int validPeople = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] + k <= 5)
        {
            validPeople++;
        }
    }
    int teamAvailable = validPeople / 3;
    cout << teamAvailable;
    return 0;
}