/**
 *    author:    vanloc1808
 *    created:   05-11-2021   18:21:02
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
    long long A, B;
    int n, m;

    cin >> A >> B >> n >> m;

    vll a(n + 2), b(m + 2);

    a[0] = 0;
    b[0] = 0;
    a[n + 1] = A;
    b[m + 1] = B;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }

    sort(all(a));
    sort(all(b));

    vll x(n + 1), y(m + 1);

    for (int i = 0; i <= n; i++) {
        x[i] = a[i + 1] - a[i];
    }

    for (int i = 0; i <= m; i++) {
        y[i] = b[i + 1] - b[i];
    }

    sort(all(x));
    sort(all(y));

    long long ans = 0;

    ans += x[0] * m + y[0] * n;

    int i = 1, j = 1;

    while (i <= n && j <= m) {
        if (x[i] <= y[j]) {
            ans += x[i] * (m - j + 1);
            i++;
        } else {
            ans += y[j] * (n - i + 1);
            j++;
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    freopen("fencedin.in", "r", stdin);
	freopen("fencedin.out", "w", stdout);
    
    cout << solve() << "\n";
    
    return 0;
}