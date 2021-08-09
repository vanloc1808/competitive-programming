
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
    int left = 0, right = n - 1, turn = 0, Sereja = 0, Dima = 0;
    while (left <= right)
    {
        turn++;
        if (v[left] < v[right])
        {
            if (turn % 2 == 1)
            {
                Sereja += v[right];
            }
            else
            {
                Dima += v[right];
            }
            right--;
        }
        else
        {
            if (turn % 2 == 1)
            {
                Sereja += v[left];
            }
            else
            {
                Dima += v[left];
            }
            left++;
        }
    }
    cout << Sereja << " " << Dima;
    return 0;
}
