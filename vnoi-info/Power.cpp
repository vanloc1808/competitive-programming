/**
 *    author:    vanloc1808
 *    created:   19-07-2022   08:55:38
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

void solve() {
    ll l, r;
    cin >> l >> r;
    //cout << "l = " << l << ", r = " << r << endl;

    ll kmax = log2(r);
    //cout << "kmax = " << kmax << endl;

    for (ll k = kmax; k >= 1; k--) {
        //cout << "k = " << k << endl;
        double l1 = exp((1.00 / k) * log(l));
        ll l1_int = l1;
        if (l1 - l1_int >= EPSILON) {
            l1_int++;
        } 
        //cout << "L1 = " << l1_int << endl;
        //cout << exp(k * log(l1_int)) << endl;

        if (ll(exp(k * log(l1_int))) <= r) {
            cout << k << "\n";
            return;
        }
    }

}

int main()
{
    fastio;
    
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        CRY;
    }
    

    return 0;
}