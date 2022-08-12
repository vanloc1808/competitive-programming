/**
 *    author:    vanloc1808
 *    created:   12-08-2022   22:49:36
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

int a[500005];

void solve() {
    int n, h;
    cin >> n >> h;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (i % 2 == 1) {
            a[1]++;
            a[x + 1]--;
        } else {
            a[h - x + 1]++;
        }
    }

    for (int i = 1; i <= h; i++) {
        a[i] += a[i - 1];
    }

    int ans = n + 1, cnt = 0;
    for (int i = 1; i <= h; i++) {
        if (a[i] < ans) {
            ans = a[i];
            cnt = 1;
        } else {
            if (a[i] == ans) {
                cnt++;
            }
        }
    }

    cout << ans << " " << cnt << "\n";
}

int main()
{
    fastio;
    CRY;
    return 0;
}