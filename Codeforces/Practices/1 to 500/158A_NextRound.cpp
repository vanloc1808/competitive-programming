#include <iostream>
using namespace std;

int main()
{
    const int nMax = 50;
    int n, k;
    int a[nMax];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check = a[k - 1];
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < check)
        {
            break;
        }
        else if (a[i] > 0)
        {
            Count++;
        }
    }
    cout << Count;
}

