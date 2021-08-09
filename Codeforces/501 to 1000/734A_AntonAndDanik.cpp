#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string gameArray;
    cin >> gameArray;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (gameArray[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (a < d)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}
