#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    int a[100];
    int n, d;
    while (T--)
    {
        cin >> n >> d;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d)
            {
                check = false;
                break;
            }
        } 
        if (check == true)
        {
            cout << "YES" << "\n";
        }
        else
        {
            bool check2 = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (a[i] + a[j] <= d)
                    {
                        check2 = true;
                    }
                }
            }
            if (check2 == true)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}