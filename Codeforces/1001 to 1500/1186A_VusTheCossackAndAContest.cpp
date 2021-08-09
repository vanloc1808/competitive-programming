#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef double db;
typedef float fl;

int main()
{
    fastinout;
    int n, m, k;
    cin >> n >> m >> k;
    bool check = true;
    if (m < n || k < n)
    {
        check = false;
    }
    if (check == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}