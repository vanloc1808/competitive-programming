#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 4; i <= (n / 2); i++)
    {
        if (isPrime(i) == false && isPrime(n - i) == false)
        {
            cout << i <<  " " << n - i;
            break;
        }
    }
    return 0;
}