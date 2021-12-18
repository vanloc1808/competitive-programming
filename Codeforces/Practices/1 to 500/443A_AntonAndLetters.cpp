#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string sIn;
    getline(cin, sIn);
    int a[123] = { 0 };
    if (sIn.length() == 2)
    {
        cout << 0;
    }
    else
    {
        for (int i = 1; i < sIn.length(); i += 3)
        {
            a[(int)sIn[i]]++;
        }
        int Sum = 0;
        for (int i = 97; i < 123; i++)
        {
            if (a[i] >= 1)
            {
                Sum++;
            }
        }
        cout << Sum;
    }
    return 0;
}
