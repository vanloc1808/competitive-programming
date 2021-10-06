/**
 *    author:    vanloc1808
 *    created:   30-09-2021   16:19:11
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

const double INF = 1e10;
const double MOD = 1e9 + 7;
const double PI = 3.14159;
const double EPSILON = 1e-6;

auto solve(vi a, int n) {
    int k;
    cin >> k;

    auto ans = lower_bound(a.begin(), a.end(), k);

    return ans;
}

int main()
{
    fastio;
    
    int n;
    cin >> n;
    int m;
    cin >> m;

    vi a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        a.pb(x);
    }

    while(m--) {
        auto ans = solve(a, n);
        if (ans == a.end()) {
            cout << "NO SOLUTION\n";
        } else {
            cout << *ans << "\n";
        }
    }
    
    return 0;
}