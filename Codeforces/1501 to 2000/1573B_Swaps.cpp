/**
 *    author:    vanloc1808
 *    created:   29-09-2021   09:37:23
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

//const double INF = 1e10;
const int INF = INT_MAX;
const double MOD = 1e9 + 7;
const double PI = 3.14159;
const double EPSILON = 1e-6;

int solve() {
    int n;
    cin >> n;

    vi pos(2 * n + 1);

    //odd array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    //even array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int len = INF;
    int ans = INF;
    map<int, int> m;

    for (int i = 1; i <= 2 * n; i += 2) {
        len = min(len, pos[i]);
        m[i] = len;
    }

    for (int i = 2; i <= 2 * n; i += 2) {
        ans = min(ans, pos[i] + m[i - 1]);
    }

    return ans;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;
    
    while(t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}