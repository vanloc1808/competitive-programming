#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int level = 1;
    int cubeNeeded = 1;
    int i = 2;
    while (cubeNeeded <= n)
    {
        cubeNeeded += i * (i + 1) / 2;
        i++;
        level++;
    }
    level--;
    cout << level << "\n";
    return 0;
}