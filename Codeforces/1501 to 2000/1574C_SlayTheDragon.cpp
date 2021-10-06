/**
 *    author:    vanloc1808
 *    created:   01-10-2021   19:21:21
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

int main()
{
    fastio;

    int n;
    cin >> n;

    vector<ll> a(n);

    ll sum = 0;

    for (auto &x : a){
        cin >> x;

        sum += x;
    } 

    sort(a.begin(), a.end());

    //ll sum = accumulate(a.begin(), a.end(), 0LL);
    int m;
    cin >> m;

     while (m--) {
        ll x, y;
        cin >> x >> y;

        int i = lower_bound(a.begin(), a.end(), x) - a.begin();

        ll ans = INF;

        if (i > 0) {
            ans = min(ans, (x - a[i - 1]) + max(0LL, (y - sum + a[i - 1])));
        }

        if (i < n) {
            ans = min(ans, max(0LL, y - sum + a[i]));
        }
        cout << ans << "\n";
    }
    return 0;
}