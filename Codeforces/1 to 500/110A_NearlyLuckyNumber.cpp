#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            Count++;
        }
    }
    bool check = true;
    if (Count == 0)
    {
        check = false;
    }
    else
    {
        while (Count != 0)
        {
            if (Count % 10 != 4 && Count % 10 != 7)
            {
                check = false;
                break;
            }
            else
            {
                Count /= 10;
            }
        }
    }
    if (check == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}


