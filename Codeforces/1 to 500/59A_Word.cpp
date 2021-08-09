#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if ((lower == upper) || (lower > upper))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }
    cout << s;
    return 0;
}


