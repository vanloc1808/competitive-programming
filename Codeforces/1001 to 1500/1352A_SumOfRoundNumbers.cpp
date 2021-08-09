#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int digitNumber = 0;
    while (n != 0)
    {
        digitNumber++;
        n /= 10;
    }
    return digitNumber;
}

bool isRound(int n)
{
    bool check;
    int temp = (int)(pow(10, countDigits(n)-1));
    if (n % temp == 0)
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int k = 0;
        if (isRound(n) == true)
        {
            k = 1;
            cout << k << "\n";
            cout << n << "\n";
        }
        else
        {
            int a[5];
            for (int i = 0; i < 4; i++)
            {
                a[i] = n % 10;
                n /= 10;
            }
            int b[5];
            for (int i = 0; i < 4; i++)
            {
                b[i] = a[i] * pow(10, i);
                if (b[i] != 0)
                {
                    k++;
                }
            }
            cout << k << "\n";
            for (int i = 0; i < 4; i++)
            {
                if (b[i] != 0)
                {
                    cout << b[i] << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}