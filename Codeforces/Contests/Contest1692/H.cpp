/**
 *    author:    vanloc1808
 *    created:   14-06-2022   22:50:42
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

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    set<int> s(all(a));
    vector<int> uni(all(s));
    int ans = 0;
    vector<vector<int>> pos(uni.size(), vector<int> ());
    for (int i = 0; i < n; i++){
        pos[lower_bound(all(uni), a[i]) - uni.begin()].pb(i);
    }
    int maxCnt = 0;
    int A = 0, l = 0, r = 0;
    for (int meow : uni){
        int i = lower_bound(all(uni), meow) - uni.begin();
        int pre = -1, cnt = 0;
        int ll = -1, rr = -1;
        for (int x : pos[i]){
            if (pre == -1) {
                cnt = 1;
                ll = rr = x;
            }
            else{
                if (x - pre - 1 <= cnt){
                    cnt = cnt - (x - pre - 1) + 1; 
                    rr = x;
                }
                else {
                    cnt = 1;
                    ll = rr = x;
                }
            }
            pre = x;
            if (cnt > maxCnt){
                maxCnt = cnt;
                A = meow;
                l = ll; r = rr;
            }
        }
    }
    cout << A << ' ' << l + 1 << ' ' << r + 1 << "\n";
}

int main()
{
    fastio;
    int t; cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}