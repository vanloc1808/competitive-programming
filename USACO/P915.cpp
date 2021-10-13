/**
 *    author:    vanloc1808
 *    created:   13-10-2021   19:24:55
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
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    
    vi a(3);
    
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    int minValue = 0;
    if (a[2] - a[1] == 1 && a[1] - a[0] == 1) {
        minValue = 0;
    } else if (a[2] - a[1] == 2 || a[1] - a[0] == 2) {
        minValue = 1;
    } else {
        minValue = 2;
    }

    int maxValue = max(a[2] - a[1], a[1] - a[0]) - 1;

    cout << minValue << "\n" << maxValue << "\n";
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}