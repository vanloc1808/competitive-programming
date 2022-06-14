/**
 *    author:    vanloc1808
 *    created:   14-06-2022   21:54:23
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
    vector<vector<char>> a(9, vector<char>(9));

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 2; i <= 7; i++) {
        for (int j = 2; j <= 7; j++) {
            if (a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#') {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }
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