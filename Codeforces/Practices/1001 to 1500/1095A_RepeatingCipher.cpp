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
    int n;
    cin >> n;
    string s;
    cin >>  s;
    int len = s.length();
    int jump = 1;
    vector<int> v;
    v.push_back(0);
    int pos = 0;
    for (; pos < n;)
    {
        cout << s[pos];
        pos += jump;
        jump++;
    }
    return 0;
}

