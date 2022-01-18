/**
 *    author:    vanloc1808
 *    created:   23-12-2021   16:44:52
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

long long solve() {
    int n, S;
    cin >> n >> S;

    vi w(n);
    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++) {
        p[i] = make_pair(w[i], v[i]);
    }

    sort(all(p));

    long long ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (p[i].first > S) {
            break;
        } else {
            ans += p[i].second;
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    int q;
    cin >> q;

    while (q--) {
        cout << solve() << "\n";
    }
    
    return 0;
}