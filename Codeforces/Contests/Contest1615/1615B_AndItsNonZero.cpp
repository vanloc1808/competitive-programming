/**
 *    author:    vanloc1808
 *    created:   24-12-2021   22:07:59
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

const int n = 200001;

vector<vector<int>> dp;

void init() {
    dp.resize(n);

    for (int i = 0; i < n; i++) {
        dp[i].resize(31);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 31; j++) {
            dp[i][j] = dp[i - 1][j] + ((i >> j) & 1);
        }
    }
}

int solve() {
    int l, r;
    cin >> l >> r;

    int ans = 2e9;

    for (int i = 0; i < 31; i++) {
        int temp = r - l + 1 - dp[r][i] + dp[l - 1][i];

        ans = min(ans, temp);
    }

    return ans;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    init();

    while(t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}