/**
 *    author:    vanloc1808
 *    created:   02-02-2022   09:04:06
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

    vi x(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(all(x));

    int q;
    cin >> q;

    while (q--) {
        int m;
        cin >> m;

        if (m < x[0]) {
            cout << 0 << "\n";
        } else if (m >= x[n - 1]) {
            cout << n << "\n";
        } else {
            int l = 0, r = n - 1;

            while (l < r) {
                int mid = (l + r) / 2;

                if (x[mid] <= m) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }

            cout << l << "\n";
        }
    }
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}