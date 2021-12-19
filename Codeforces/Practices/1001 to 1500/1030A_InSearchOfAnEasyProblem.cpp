#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    return 0;
}