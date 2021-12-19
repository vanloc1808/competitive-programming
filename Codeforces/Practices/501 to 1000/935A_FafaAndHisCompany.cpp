#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ways = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ways += 2;
        }
    }
    if ((int)sqrt(n)*(int)sqrt(n)==n)
    {
        ways--;
    }
    cout << ways << "\n";
    return 0;
}