/**
 *    author:    vanloc1808
 *    created:   29-09-2021   13:48:44
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
    int n;
    cin >> n;

    vi a(n + 1);
    vi sum(n + 1);

    sum[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        sum[i] = a[i] + sum[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << sum[i] << " ";
    }
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}