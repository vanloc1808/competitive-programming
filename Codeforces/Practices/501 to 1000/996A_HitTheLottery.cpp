#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int Count = 0;
    Count += n / 100;
    n %= 100;
    Count += n / 20;
    n %= 20;
    Count += n / 10;
    n %= 10;
    Count += n / 5;
    n %= 5;
    Count += n;
    cout << Count;
    return 0;
}