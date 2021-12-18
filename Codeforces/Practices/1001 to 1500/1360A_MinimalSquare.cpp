#include <iostream>
using namespace std;

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

int minValue(int a, int b)
{
    if (a <= b)
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
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int minOfAB = minValue(a, b);
        int maxOfAB = maxValue(a, b);
        int minEdge = maxValue(minOfAB * 2, maxOfAB);
        int minArea = minEdge * minEdge;
        cout << minArea << "\n";
    }
    return 0;
}