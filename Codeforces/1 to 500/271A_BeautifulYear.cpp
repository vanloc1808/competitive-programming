#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int temp;
    while (1)
    {
        year++;
        int first = year / 1000;
        int second = (year % 1000) / 100;
        int third = (year % 100) / 10;
        int forth = (year % 10);
        if (first != second && first != third && first != forth && second != third && second != forth && third != forth)
        {
            break;
        }
    }
    cout << year;
    return 0;
}

