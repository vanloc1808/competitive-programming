/**
 *    author:    vanloc1808
 *    created:   30-09-2021   18:37:41
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

bool solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    
    if (k <= 1) {
        return false;
    }
    
    ll maxEdge = n * (n - 1) / 2;
    
    if (m < n - 1 || m > maxEdge) {
        return false;
    } 
    
    if (k == 2) {
        if (n == 1){
            return true;
        }
        
        return false;
    }
    
    if (k == 3) {
        if (m == maxEdge) {
            return true;
        }
        
        return false;
    }
    
    
    return true;
}    

int main()
{
    
    fastio;
    
    int t;
    cin >> t;
    
    while(t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
