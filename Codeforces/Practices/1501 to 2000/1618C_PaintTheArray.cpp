/**
 *    author:    vanloc1808
 *    created:   23-12-2021   15:10:58
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
    int n;
    cin >> n;

    vll a;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.pb(x);
    }

    vll gcd(a.begin(), a.begin() + 2);

    for (int i = 0; i < n; i++) {
        gcd[i % 2] = __gcd(gcd[i % 2], a[i]);
    }

    vector<bool> isGood(2, true);

    for (int i = 0; i < n; i++) {
        isGood[i % 2] = isGood[i % 2] && (a[i] % gcd[(i % 2) ^ 1] > 0);
    }

    long long ans = 0;

    for (int i = 0; i < 2; i++) {
        if (isGood[i]) {
            ans = max(ans, gcd[i ^ 1]);
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;
    
    while(t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}