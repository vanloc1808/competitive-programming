#include <iostream>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int maxValue = a[0], iMax = 0;
    for (int i = 1; i < 4; i++)
    {
        if (a[i] > maxValue)
        {
            maxValue = a[i];
            iMax = i;
        }
    }
    int b[3], j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i == iMax)
        {
            continue;
        }
        else
        {
            b[j] = maxValue - a[i];
            j++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}