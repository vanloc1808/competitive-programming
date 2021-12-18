#include <iostream>
using namespace std;

int main()
{
    int a[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Count = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] % 10 == a[i + 1] / 10)
        {
            Count++;
        }
    }
    cout << Count;
    return 0;
}
