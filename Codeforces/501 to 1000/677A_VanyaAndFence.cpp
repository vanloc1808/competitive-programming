#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int roadWidth = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
        {
            roadWidth++;
        }
        else
        {
            roadWidth += 2;
        }
    }
    cout << roadWidth;
    return 0;
}