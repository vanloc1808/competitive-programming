/**
 *    author:    vanloc1808
 *    created:   10-01-2022   10:31:05
**/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;
typedef float fl;
typedef double db;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

vector<int> f(101, 0);

//cyclic after 16 units
void init() {
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i <= 100; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % 7;
    }
}

int solve() {
    int u, v;
    cin >> u >> v;

    u -= 1;
    v -= 1;

    int ans = -1;
    int len = v - u + 1;

    if (len >= 32) {
        ans = (len / 16) * 16;
    } else {
        u %= 32;

        for (int i = u; i < u + len - 1; i++) {
            if (f[i] == f[i + 1]) {
                ans = 2;
            }
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    init();

    int k;
    cin >> k;

    while (k--) {
        cout << solve() << "\n";
    }
    
    return 0;
}