/* 91-year anniversary of the foundation of Communist Party of Vietnam
03/02/1930 - 03/02/2021 */

#include <iostream>
#include <vector>
#include <set>
#include <concurrent_priority_queue.h>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name."inp", "r", stdin); freopen_s(&fo, name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e17

int main()
{
    fastinout;
    int a[3], b[3];
    int totalCup = 0, totalMedal = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        totalCup += a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        totalMedal += b[i];
    }
    int n;
    cin >> n;
    int shelvesNeeded = 0;
    if (totalCup % 5 == 0)
    {
        shelvesNeeded += totalCup / 5;
    }
    else
    {
        shelvesNeeded += totalCup / 5 + 1;
    }
    if (totalMedal % 10 == 0)
    {
        shelvesNeeded += totalMedal / 10;
    }
    else
    {
        shelvesNeeded += totalMedal / 10 + 1;
    }
    if (shelvesNeeded <= n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
