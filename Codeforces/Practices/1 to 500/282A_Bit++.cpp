#include <iostream>
using namespace std;

int main()
{
    char a[3];
    int x = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == '+' && a[1] == '+')
        {
            ++x;
        }
        else if (a[1] == '+' && a[2] == '+')
        {
            x++;
        }
        else if (a[0] == '-' && a[1] == '-')
        {
            --x;
        }
        else
        {
            x--;
        }
    }
    cout << x;
}


