/**
 *    author:    vanloc1808
 *    created:   03-02-2022   19:43:37
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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<bool> notAlready(100001, true);

    vi a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> ans(n + 1);

    ans[n] = 1;
    notAlready[a[n]] = false;
    for (int i = n - 1; i >= 1; i--) {
        ans[i] = ans[i + 1] + notAlready[a[i]];
        notAlready[a[i]] = false;
    }

    while (m--) {
        int l;
        cin >> l;

        cout << ans[l] << "\n";
    }
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}