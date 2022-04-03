/**
 *    author:    vanloc1808
 *    created:   02-04-2022   22:02:42
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

    vector<int> s(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    sort(all(s));

    int res = 0;
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        cnt++;

        cnt = min(cnt, s[i]);

        res = max(res, cnt);
    }

    return res;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": " << solve() << "\n";
    }

    return 0;
}