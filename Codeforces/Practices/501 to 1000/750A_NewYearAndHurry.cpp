#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    if (k == 240)
    {
        cout << 0;
    }
    else
    {
        int timeLeft = 240 - k;
        int problemSolved = 0;
        int timeLost = 0;
        while (timeLost <= timeLeft)
        {
            problemSolved++;
            timeLost += 5*problemSolved;
            if (timeLost > timeLeft)
            {
                problemSolved--;
            }
        }
        if (problemSolved > n)
        {
            problemSolved = n;
        }
        cout << problemSolved;
    }
    return 0;
}