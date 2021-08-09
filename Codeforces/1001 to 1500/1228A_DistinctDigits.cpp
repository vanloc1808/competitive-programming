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

bool checkSatisfied(int n)
{
    vector<int> digit;
    while (n != 0)
    {
        int last = n % 10;
        digit.push_back(last);
        n /= 10;
    }
    bool check = true;
    sort(digit.begin(), digit.end());
    for (int i = 0; i < digit.size() - 1; i++)
    {
        if (digit[i] == digit[i + 1])
        {
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    fastinout;
    int l, r;
    cin >> l >> r;
    int res = -1;
    for (int i = l; i <= r; i++)
    {
        if (checkSatisfied(i) == true)
        {
            res = i;
            break;
        }
    }
    cout << res << "\n";
    return 0;
}
