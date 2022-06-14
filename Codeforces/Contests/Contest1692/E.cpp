/**
 *    author:    vanloc1808
 *    created:   14-06-2022   22:16:45
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

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
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

int solve() {
    int n, s; cin >> n >> s;
    vector<int> sum(n + 1, 0);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        sum[i + 1] = sum[i] + x;
    }
    int ans = n + 1;
    for (int x = 0; x <= n; x++){
        int l = x + 1, r = n;
        int pos = -1;

        while (l <= r){
            int m = (l + r) / 2;
            if (sum[m] - sum[x] <= s){
                l = m + 1;
                pos = m;
            }
            else {
                r = m - 1;
            }
        }
        if (pos != -1 && sum[pos] - sum[x] == s){
            ans = min(ans, x + n - pos);
        }
        else if (x == n && s == 0){
            ans = min(ans, n);
        }
    }
    return (ans == n + 1 ? -1 : ans);
}

int main()
{
    fastio;
    int t; cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    
    
    return 0;
}