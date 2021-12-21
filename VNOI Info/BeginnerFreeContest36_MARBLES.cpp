/**
 *    author:    vanloc1808
 *    created:   21-12-2021   18:14:49
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

int moveOne(int a, int b, int c, int d, int x) {
    return min(abs(a - c) + abs(b - d), abs(a - d) + abs(b - c)) * x;
}



int solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;

    int ans = INT_MAX;

    for (int i = -n; i <= n; i++) {
        int news1 = s1 + i;
        int news2 = s2 + i;

        if (news1 >= 1 && news1 <= n && news2 >= 1 && news2 <= n) {
            ans =  min(ans, y * abs(i) + moveOne(t1, t2, news1, news2, x));
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}