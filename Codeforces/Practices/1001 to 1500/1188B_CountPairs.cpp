/**
 *    author:    vanloc1808
 *    created:   22-12-2021   08:02:29
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

int sub(int a, int b, int p) {
    int res = ((a - b) % p + p) % p;

    return res;
}

int multiply (int a, int b, int p) {
    int res = (1LL * (a % p) * (b % p)) % p;

    return res;
}

int quartic (int a, int p) {
    int res = multiply(multiply(a, a, p), multiply(a, a, p), p);

    return res;
}

int solve() {
    int n, p, k;
    cin >> n >> p >> k;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.pb(x);
    }

    long long res = 0;
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x = sub(quartic(a[i], p), multiply(k, a[i], p), p);

        res += 1LL * m[x];

        m[x]++;
    }

    return res;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}