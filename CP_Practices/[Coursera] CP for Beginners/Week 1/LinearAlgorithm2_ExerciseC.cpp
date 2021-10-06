/**
 *    author:    vanloc1808
 *    created:   29-09-2021   14:03:59
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

long long solve() {
    int n;
    cin >> n;

    
    vll a(n);
    vll maxValue(n);



    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    maxValue[0] = a[0];

    for (int i = 1; i < n; i++) {
        maxValue[i] = max(a[i], maxValue[i - 1] + a[i]);
    }

    ll ans = maxValue[0];

    for (int i = 1; i < n; i++) {
        ans = max(ans, maxValue[i]);
    }

    return ans;
    /*source: Nguyen Van Hung*/
    // int n; 
    // cin >> n;

	// long ans = INT_MIN;

	// long sum = 0, mn = 0;

	// for (int i = 0; i < n; i++){
	// 	int x; cin >> x;
	// 	sum += x;
	// 	ans = max(ans, sum - mn);
	// 	mn = min(mn, sum);
	// }
    
	// return ans;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}