#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y)
        {
            swap(x, y);
        }
        if (y < z)
        {
            swap(y, z);
        }
        if (x < z)
        {
            swap(x, z);
        }
        //Khong mat tong quat gia su a >=b >=c
        if (x == y)
        {
            cout << "YES\n";
            cout << z << " " << z << " " << x << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}