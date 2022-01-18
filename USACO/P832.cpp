/**
 *    author:    vanloc1808
 *    created:   13-10-2021   20:16:12
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
    int n, m, k;
    cin >> n >> m >> k;

    vi hierarchy;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        hierarchy.push_back(x);
    }

    vector<bool> already(n + 1, false);
    vi pos(n + 1, -1);
    vi ans(n + 1, 0);

    for (int i = 0; i < k; i++) {
        int c, p;
        cin >> c >> p;

        if (c == 1) {
            return p;
        }

        ans[p] = c;
        already[c] = true;
        pos[c] = p;
    }

    int hier1 = -1;
    for (int i = 0; i < m; i++) {
        if (hierarchy[i] == 1) {
            hier1 = i;
        }
    }

    if (hier1 != -1) {
        for (int i = 0; i < hier1; i++) {
    
        }
    }

    int j = n;
    for (int i = m - 1; i >= 0; i--) {
        int cur = hierarchy[i];

        if (already[cur] == true) {
            j = pos[cur];
            j--;
            continue;
        }

        while(ans[j] != 0) {
            j--;
        }

        ans[j] = cur;
        pos[cur] = j;
        already[cur] = true;
        j--;
    }

    int res = -1;
    for (int i = 1; i <= n; i++) {
        if (ans[i] == 0) {
            res = i;
            break;
        }
    }

    return res;
}

int main()
{
    fastio;

    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    
    cout << solve() << "\n";
    
    return 0;
}