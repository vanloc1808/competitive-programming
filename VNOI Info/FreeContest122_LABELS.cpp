/**
 *    author:    vanloc1808
 *    created:   24-12-2021   18:24:24
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
    int n;
    cin >> n;

    vi d(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> d[i];
    }

    vi prefix(n - 1);
    prefix[0] = d[0];
    int maxPrefix = prefix[0], minPrefix = prefix[0];

    for (int i = 1; i < n - 1; i++) {
        prefix[i] = prefix[i - 1] + d[i];
        maxPrefix = max(maxPrefix, prefix[i]);
        minPrefix = min(minPrefix, prefix[i]);
    }    

    int cnt = 0;
    int start;

    for (int i = 1; i <= n; i++) {
        if (i + maxPrefix > n || i + minPrefix < 1) {
            continue;
        }

        cnt++;
        start = i;
    }

    if (cnt != 1) {
        cout << -1 << "\n";

        return;
    }

    cout << start << " ";

    for (int i = 1; i < n; i++) {
        cout << start + prefix[i - 1] << " ";
    }

    cout << "\n";
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}