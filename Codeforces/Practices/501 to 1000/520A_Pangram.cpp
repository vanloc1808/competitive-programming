#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    int Count[26] = { 0 };
    for (int i = 0; i < n; i++)
    {
        Count[s[i] - 'A']++;
    }
    bool check = true;
    for (int i = 0; i < 26; i++)
    {
        if (Count[i] == 0)
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
    return 0;
}