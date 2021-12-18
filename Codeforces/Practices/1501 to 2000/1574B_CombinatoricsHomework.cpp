/**
 *    author:    vanloc1808
 *    created:   27-09-2021   18:03:42
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
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;

        bool res = true;

        //the maxiumun number of pairs
        if (a + b + c - 3 < m) {
            res = false;
        }

        //the minumum number of pairs

        //find max of three
        int maxValue = max(a, max(b, c));

        //find sum of the two that does not contain max
        int sumOfRest = a + b + c - maxValue;

        int minPairs = maxValue - 1 - sumOfRest;

        if (m < minPairs) {
            res = false;
        }

        if (res) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main()
{
    fastio;
    
    solve();

    return 0;
}
