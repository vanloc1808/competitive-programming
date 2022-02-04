/**
 *    author:    vanloc1808
 *    created:   04-02-2022   19:40:51
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

int solve() {
    int n;
    cin >> n;

    int a;
    int ones = 0;
    int idx = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a == 1) {
            //idx = i;
            ones++;
        } else {
            ones = false;

            if (idx == 0) {
                idx = i;
            }
        }
    }

    if (idx != 0) {
        if (idx % 2 == 1) {
            return 1;
        } else {
            return 2;
        }
    } else {
        if (ones % 2 == 1) {
            return 1;
        } else {
            return 2;
        }
    }
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while (t--) {
        if (solve() == 1) {
            cout << "First" << "\n";
        } else {
            cout << "Second" << "\n";
        }
    }
    
    return 0;
}