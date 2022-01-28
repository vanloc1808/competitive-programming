/**
 *    author:    vanloc1808
 *    created:   28-01-2022   16:06:20
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
    int n, k;
    cin >> n >> k;

    vi men, women;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        if (h > 0) {
            men.pb(h);
        } else {
            women.pb(abs(h));
        }
    }

    sort(all(men));
    sort(all(women));

    long long res = 0;

    for (int i = 0; i < men.size(); i++) {
        int low = lower_bound(all(women), men[i] - k) - women.begin();
        int high = upper_bound(all(women), men[i]) - women.begin();

        res += high - low;
    }

    return res;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}