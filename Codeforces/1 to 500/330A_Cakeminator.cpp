#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <bitset>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", s
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e15
#define Epsilon 1e-6

int main()
{
    fastinout;
    int r, c;
    cin >> r >> c;
    char a[10][10];
    bool row[10] = { false };
    bool column[10] = { false };
   /* for (int i = 0; i < 10; i++)
    {
        cout << row[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << column[i] << " ";
    }
 */   for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 'S')
            {
                row[i] = true;
                column[j] = true;
            }
        }
    }
    int total(0);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (row[i] == false || column[j] == false)
            {
                total++;
            }
        }
    }
    cout << total << "\n";
    return 0;
}
