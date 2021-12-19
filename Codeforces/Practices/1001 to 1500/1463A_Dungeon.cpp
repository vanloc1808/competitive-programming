/**
 *    author:    vanloc1808
 *    created:   28-09-2021   17:27:49
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
const double MOD = 1e9 + 7;
const double PI = 3.14159;
const double EPSILON = 1e-6;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    //every 7 shots, we have taken 9 damages.
    if ((a + b + c) % 9 != 0) {
        cout << "NO\n";
    } else {
        //check if the minumum is at least k = (a + b + c) / 9, because every monsters deal >= k damages.
        int minValue = min(a, min(b, c));

        if (minValue < (a + b + c) / 9){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}