#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        int distance = abs(b - a);
        int steps = 0;
        steps += distance / 10;
        distance %= 10;
        if (distance != 0)
        {
            steps++;
        }
        cout << steps << "\n";
    }
    return 0;
}