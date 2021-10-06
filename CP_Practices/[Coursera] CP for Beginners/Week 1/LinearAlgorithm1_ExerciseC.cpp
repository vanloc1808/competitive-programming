/**
 *    author:    vanloc1808
 *    created:   28-09-2021   20:52:33
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
//const double MOD = 1e9 + 7;
const double PI = 3.14159;
const double EPSILON = 1e-6;
const ll MOD = 1791791791;

ll cur, a, b;

ll nextRand() {
    cur = (cur * a + b) % MOD;

    return cur;
}

void solve() {
    int n;
    cin >> n;
    
    cin >> cur >> a >> b;

    ll maxValue = -1, secondMaxValue = -1;
    int maxIndex = -1, secondMaxIndex = -1;

    vll a(n);

    for (int i = 0; i < n; i++) {
        a[i] = nextRand();
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] >= maxValue) {
            secondMaxValue = maxValue;
            secondMaxIndex = maxIndex;
            maxValue = a[i];
            maxIndex = i;
        } else if (a[i] < maxValue) {
            if (a[i] >= secondMaxValue) {
            secondMaxValue = a[i];
            secondMaxIndex = i;
            }
        } 
    }

    if (maxIndex == -1 || secondMaxIndex == -1) {
        cout << 1 << " " << 2 << "\n";
    } else {
        cout << maxIndex + 1 << " " << secondMaxIndex + 1 << "\n";
    }
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}