/**
 *    author:    vanloc1808
 *    created:   13-08-2022   10:30:37
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
const int NMAX = 5000;
pair<int, int> a[NMAX + 5];
int lst[NMAX + 5];

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        sort(a, a + n);

        lst[0] = a[n - 1].second;
        int maxlen = 1;

        for (int i = n - 2; i >= 0; i--) {
            int idx = lower_bound(lst, lst + maxlen, a[i].second) - lst;
            
            if (idx == maxlen) {
                lst[idx] = a[i].second;
                maxlen++;
            } else {
                lst[idx] = a[i].second;
            }
        }

        cout << maxlen << "\n";
    }
}

int main()
{
    fastio;
    CRY;
    return 0;
}