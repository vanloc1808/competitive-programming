#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int halfOfN = n / 2;
        if (halfOfN % 2 == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            int sumEven = 0, sumOdd = 0;
            for (int i = 0; i < n / 2; i++)
            {
                int temp = 2 * (i + 1);
                cout << temp << " ";
                sumEven += temp;
            }
            for (int i = n / 2; i < n - 1; i++)
            {
                int temp = 2 * (i - n / 2) + 1;
                cout << temp << " ";
                sumOdd += temp;
            }
            cout << sumEven - sumOdd;
            cout << "\n";
        }
    }
    return 0;
}