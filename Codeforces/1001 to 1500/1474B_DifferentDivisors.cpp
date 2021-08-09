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
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int prime1, prime2;
        for (int i = d + 1;; i++)
        {
            if (isPrime(i) == true)
            {
                prime1 = i;
                break;
            }
        }
        for (int i = prime1 + d; ; i++)
        {
            if (isPrime(i) == true)
            {
                prime2 = i;
                break;
            }
        }
        long long a = 1ll * prime1 * prime2;
        cout << a << "\n";
    }
    return 0;
}