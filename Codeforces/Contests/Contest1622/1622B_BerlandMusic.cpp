/**
 *    author:    vanloc1808
 *    created:   27-12-2021   21:42:38
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
    int n;
    cin >> n;

    vi p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    string s;
    cin >> s;

    vi q(n + 1);

    int oneCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            oneCount++;
        }
    }

    int zeroIndex = 1;
    int oneIndex = n - oneCount + 1;

    vi zero;
    vi one;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zero.pb(p[i]);
        } else {
            one.pb(p[i]);
        }
    }

    sort(all(zero));
    sort(all(one));

    // for (int i = 0; i < zero.size(); i++) {
    //     cout << zero[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < one.size(); i++) {
    //     cout << one[i] << " ";
    // }
    // cout << "\n";

    //cout << "Zero\n";
    for (int i = 0; i < zero.size(); i++) {
        // cout << zero[i] << " ";
        // cout << zeroIndex << "\n";
        q[zero[i]] = zeroIndex;
        zeroIndex++;
    }
    //cout << "\nOne\n";

    for (int i = 0; i < one.size(); i++) {
        // cout << one[i] << " ";
        // cout << oneIndex << "\n";
        q[one[i]] = oneIndex;
        oneIndex++;
    }
    //cout << "\n";

    for (int i = 0; i < n; i++) {
        cout << q[p[i]] << " ";
    }
    cout << "\n";
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}