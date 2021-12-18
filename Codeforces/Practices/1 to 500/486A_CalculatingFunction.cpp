#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long S;
    if (n % 2 == 0)
    {
        S = n / 2;
    }
    else
    {
        S = -(n + 1) / 2;
    }
    cout << S;
}
