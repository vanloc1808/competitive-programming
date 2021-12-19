#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    sort(x, x + 3);
    int distance = abs(x[1] - x[0]) + abs(x[2] - x[1]);
    cout << distance;
    return 0;
}