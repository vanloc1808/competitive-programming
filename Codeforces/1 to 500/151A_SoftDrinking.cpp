#include <iostream>

using namespace std;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minValue(int a, int b, int c)
{
    int Min = a;
    if (b < Min)
    {
        Min = b;
    }
    if (c < Min)
    {
        Min = c;
    }
    return Min;
}

int main()
{
    fastinout;
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalMilimeters = k * l;
    int toastMl = totalMilimeters / nl;
    int totalSlices = c * d;
    int totalSalt = p / np;
    int result = minValue(toastMl, totalSlices, totalSalt) / n;
    cout << result;
    return 0;
}