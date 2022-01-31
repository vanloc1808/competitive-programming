/**
 *    author:    vanloc1808
 *    created:   31-01-2022   15:20:28
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

vector<vector<int>> dp(5000, vector<int>(5000, -1));
int n;
string s;

int solve(int a, int b) {
    if (a >= b) {
        return 0;
    }

    if (dp[a][b] != -1) {
        return dp[a][b];
    }

    if (s[a] == s[b]) {
        dp[a][b] = solve(a + 1, b - 1);
    } else {
        dp[a][b] = min(solve(a, b - 1), solve(a + 1, b)) + 1;
    }

    return dp[a][b];
}

int main()
{
    fastio;
    
    cin >> n;
    cin >> s;

    cout << solve(0, n - 1) << "\n";
    
    return 0;
}