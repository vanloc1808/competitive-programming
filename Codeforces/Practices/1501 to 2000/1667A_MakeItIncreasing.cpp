/**
 *    author:    vanloc1808
 *    created:   18-07-2022   22:13:38
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

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define CRY solve()

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

void solve() {
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = INF;

    for (int i = 0; i < n; i++) {
        ll prev = 0, sum = 0;

        for (int j = i - 1; j >= 0; j--) {
            prev += a[j] - prev % a[j];
            sum += prev / a[j];
        }

        prev = 0;

        for (int j = i + 1; j < n; j++) {
            prev += a[j] - prev % a[j];
            sum += prev / a[j];
        }

        ans = min(ans, sum);
    }

    cout << ans << "\n";
}

int main()
{
    fastio;
    CRY;
    return 0;
}