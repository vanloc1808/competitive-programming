#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k, r;
    cin >> k >> r;
    int shovelNumber;
    for (int i = 1; ; i++)
    {
        int price = i * k;
        if (price % 10 == r || price % 10 == 0)
        {
            shovelNumber = i;
            break;
        }
    }
    cout << shovelNumber;
    return 0;
}