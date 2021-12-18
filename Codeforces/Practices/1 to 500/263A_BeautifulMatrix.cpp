#include <iostream>
using namespace std;

int main()
{
    int a[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }
    int row, column;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                row = i;
                column = j;
                break;
                break;
            }
        }
    }
    int steps = abs(row - 3) + abs(column - 3);
    cout << steps;
    return 0;
}

