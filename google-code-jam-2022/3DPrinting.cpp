/**
 *    author:    vanloc1808
 *    created:   03-04-2022   09:48:27
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

int main()
{
    fastio;
    
    int T; cin >> T;
    for (int tt = 1; tt <= T; tt++){
        cout << "Case #" << tt << ": ";
        int c, m, y, k; 
        c = m = y = k = INF + 1;
        for (int i = 0; i < 3; i++){
            int u, v, p, q; cin >> u >> v >> p >> q;
            c = min(c, u); m = min(m, v); 
            y = min(y, p); k = min(k, q);
        }    
        int r = c + m + y + k - INF;
        if (r < 0) cout << "IMPOSSIBLE\n";
        else {
            int tmp; 
            tmp = min(r, c); r -= tmp; c -= tmp;
            tmp = min(r, m); r -= tmp; m -= tmp;
            tmp = min(r, y); r -= tmp; y -= tmp;
            tmp = min(r, k); r -= tmp; k -= tmp;
            cout << c << ' ' << m << ' ' << y << ' ' << k << '\n';
        }
    }
    
    return 0;
}