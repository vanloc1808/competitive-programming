#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string sGuest, sHost, sMorning;
    cin >> sGuest >> sHost >> sMorning;
    string sTotal = sGuest + sHost;
    if (sTotal.length() != sMorning.length())
    {
        cout << "NO";
    }
    else
    {
        sort(sTotal.begin(), sTotal.end());
        sort(sMorning.begin(), sMorning.end());
        bool check = true;
        for (int i = 0; i < sTotal.length(); i++)
        {
            if (sTotal[i] != sMorning[i])
            {
                check = false; 
                break;
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
    }
    return 0;
}