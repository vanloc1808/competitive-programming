/**
 *    author:    vanloc1808
 *    created:   02-02-2022   09:14:21
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
    int n, k;
    cin >> n >> k;

    vi h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vll prefix(n);
    prefix[0] = h[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + h[i];
    }

    int ans = 0;
    int minValue = prefix[k - 1];
    for (int i = 1; i + k - 1 < n; i++) {
        if (prefix[i + k - 1] - prefix[i - 1] < minValue) {
            minValue = prefix[i + k - 1] - prefix[i - 1];
            ans = i;
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    cout << solve() + 1 << "\n";
    
    return 0;
}