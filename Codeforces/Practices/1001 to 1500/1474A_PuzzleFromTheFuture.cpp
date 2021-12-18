#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    /*while (t--)
    {
        int n;
        string b;
        cin >> n;
        cin >> b;
        string d = "";
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
            {
                if (b[i - 1] == '0')
                {
                    if (i % 2 == '0')
                    {
                        d += '1';
                    }
                    else
                    {
                        d += '0';
                    }
                }
                else
                {
                    d += '1';
                }
            }
            else 
            {
                if (b[i - 1] == '1')
                {
                    if (i % 2 == '0')
                    {
                        d += '1';
                    }
                    else
                    {
                        d += '2';
                    } 
                }
                else
                {
                    d += '2';
                }
            }
        }
        string a = "";
        for (int i = 0; i < n; i++)
        {
            a += d[i] - b[i] + '0';
        }
        cout << a << "\n";
    }
 */  
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int pre = -1;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j >= 0; j--)
            {
                int cur = (s[i] - '0') + j;
                if (cur != pre)
                {
                    ans += j + '0';
                    pre = cur;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}