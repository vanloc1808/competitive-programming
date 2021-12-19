#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a, b, c, count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (b == 1 && c == 1) || (c == 1 && a == 1))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}

