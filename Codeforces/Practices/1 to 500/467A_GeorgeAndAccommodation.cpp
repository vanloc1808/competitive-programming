#include <iostream>
using namespace std;

int main()
{
    int n, p[100], q[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }
    int roomAvailable = 0;
    for (int i = 0; i < n; i++)
    {
        if (q[i] - p[i] >= 2)
        {
            roomAvailable++;
        }
    }
    cout << roomAvailable;
}


