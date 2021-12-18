#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s;
    char a[51];
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            a[j] = char(s[i]);
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        for (int k = i + 1; k < j; k++)
        {
            if (a[i] > a[k])
            {
                int temp = a[i];
                a[i] = a[k];
                a[k] = temp;
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (i == j - 1)
        {
            cout << a[i];
        }
        else
        {
            cout << a[i] << "+";
        }
    }
    return 0;
}


