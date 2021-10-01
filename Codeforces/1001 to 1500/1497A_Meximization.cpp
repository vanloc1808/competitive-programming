/**
 *    author:    vanloc1808
 *    created:   01-10-2021   19:49:55
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

void solve() {
    //sort the array
    //take ONCE every number in the array to the answer
    //then take the rest to the answer
    
    int n;
    cin >> n;

    vi a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    vi ans;

    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            ans.push_back(a[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1]) {
            ans.push_back(a[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
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