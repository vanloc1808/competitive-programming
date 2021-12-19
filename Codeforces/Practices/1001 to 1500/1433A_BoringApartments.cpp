#include <iostream>
using namespace std;

int countDigit(int n)
{
    int digitNumber = 0;
    while (n != 0)
    {
        n /= 10;
        digitNumber++;
    }
    return digitNumber;
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
        int x;
        cin >> x;
        int digitNumber = countDigit(x);
        x %= 10;
        int totalNumber = 0;
        for (int i = 1; i < x; i++)
        {
            totalNumber += 1 + 2 + 3 + 4;
        }
        for (int j = 1; j <= digitNumber; j++)
        {
            totalNumber += j;
        }
        cout << totalNumber << "\n";
    }
    return 0;
}