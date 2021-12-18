#include <iostream>
#include <string>
using namespace std;
 
bool isDivisor(string multiples, string divisors)
{
    if (multiples.length() % divisors.length() != 0)
    {
        return false;
    }
    else
    {
        int i = 0;
        while (i < multiples.length())
        {
            int j = 0;
            while (j < divisors.length())
            {
                if (multiples[i + j] != divisors[j])
                {
                    return false;
                }
                j++;
            }
            i += divisors.length();
        }
        return true;
    }
}
 
int main()
{
    int T;
    cin >> T;
    string s, t;
    while (T--)
    {
        cin >> s >> t;
        string temp = t;
        string outp = "";
        if (isDivisor(s, t) == true)
        {
            outp = s;
        }
        else if (isDivisor(t, s) == true)
        {
            outp = t;
        }
        else
        {
            for (int i = 2; i <= s.length(); i++)
            {
                temp += t;
                if (isDivisor(temp, s) == true)
                {
                    outp = temp;
                    break;
                }
            }
        }
        if (outp.length() == 0)
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << outp << "\n";
        }
    }
    return 0;
}