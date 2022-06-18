/**
 *    author:    vanloc1808
 *    created:   21-12-2021   17:40:59
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

int solve() {
    int n;
    cin >> n;

    vi a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.pb(x);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            
            for (int k = 0; k < n; k++) {
                if (i == k || j == k) {
                    continue;
                }

                if (a[i] + a[j] == a[k]) {
                    ans++;
                }
            }
        } 
    }

    return ans;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while (t--) {
        if (solve() > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}