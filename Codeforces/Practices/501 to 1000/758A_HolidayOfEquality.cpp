#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int maxValue = *max_element(v.begin(), v.end());
    int steps = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = maxValue - v[i];
        steps += temp;
    }
    cout << steps;
    return 0;
}