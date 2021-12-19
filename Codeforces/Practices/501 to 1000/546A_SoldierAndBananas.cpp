#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int price = k * w * (w + 1) / 2;
    int rest = price - n;
    if (rest > 0)
    {
        cout << rest;
    }
    else
    {
        cout << 0;
    }
    return 0;
}


