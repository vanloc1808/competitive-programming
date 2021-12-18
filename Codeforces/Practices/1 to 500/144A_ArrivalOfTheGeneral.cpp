#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minValue = a[0], iMin = 0;
    int maxValue = a[0], iMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= minValue)
        {
            minValue = a[i];
        }
        if (a[i] >= maxValue)
        {
            maxValue = a[i];
        }
    }
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxValue)
        {
            iMax = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == minValue)
        {
            iMin = i;
            break;
        }
    }
    if (iMax == 0 && iMin == n - 1)
    {
        Count = 0;
    }
    else if (iMax > iMin)
    {
        Count = iMax + n - 1 - iMin - 1;
    }
    else
    {
        Count = iMax + n - 1 - iMin;
    }
    cout << Count;
    return 0;
}