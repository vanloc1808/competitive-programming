#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int calories = 0;
    for (int i = 0; i < s.length(); i++)
    {
        calories += a[s[i] - '1'];
    }
    cout << calories;
    return 0;
}