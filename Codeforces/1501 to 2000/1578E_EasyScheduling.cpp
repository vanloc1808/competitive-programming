/**
 *    author:    vanloc1808
 *    created:   02-10-2021   20:01:43
**/

//THIS RECEIVES WRONG ANSWER ON TEST 2, BUT I HAVEN'T FOUND MY MISTAKE YET. ._.

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
    ll h, p;
    cin >> h >> p;

    ll nodes = pow(2, h) - 1;

    if (p == 1) {
        ll ans = pow(2, h) - 1;
        
        return ans;
    }

    int k = 0;
    for (; pow(2, k) < p; k++);

    k--;

    ll division = 1.0 * (nodes - pow(2, k + 1) + 1) / p;
    ll ceiling = ceil(division);

    if (ceiling == division) {
        ceiling++;
    }

    ll ans = k + ceiling;
    //cout << k << "\n";

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