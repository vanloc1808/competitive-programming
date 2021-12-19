#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string table;
    string hand[5];
    cin >> table;
    for (int i = 0; i < 5; i++)
    {
        cin >> hand[i];
    }
    int can = false;
    for (int i = 0; i < 5; i++)
    {
        if (table[0] == hand[i][0] || table[1] == hand[i][1])
        {
            can = true;
            break;
        }
    }
    if (can == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}