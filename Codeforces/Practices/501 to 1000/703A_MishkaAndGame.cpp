#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[2];
    int mishka = 0, chris = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[0] >> a[1];
        if (a[0] > a[1])
        {
            mishka++;
        }
        else if (a[0] < a[1])
        {
            chris++;
        }
    }
    if (mishka > chris)
    {
        cout << "Mishka";
    }
    else if (mishka < chris)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
    return 0;
}