/**
 *    author:    vanloc1808
 *    created:   01-10-2021   17:14:45
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

const double INF = 1e10;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

long long certNumbers(ll h, ll w, ll len){
    return (len / h) * ( len / w);
}

long long solve() {
    ll h, w, n;
    cin >> w >> h >> n;

    ll l = 0, r = max(h, w) * n;

    while(l + 1 < r) {
        ll mid = l + (r - l) / 2;

        if (certNumbers(h,w,mid) >= n) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
        
    return 0;
}