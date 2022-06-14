/**
 *    author:    vanloc1808
 *    created:   14-06-2022   22:02:33
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

bool chk(int mint) {
    int h = mint / 60;
    int m = mint % 60;
    string s = to_string(h) + ":" + to_string(m);

    if (h < 10) s.insert(0, "0");
    if (m < 10) s.insert(3, "0");
    string t = s;
    reverse(all(t));

    if (s == t) {
        return true;
    }

    return false;
}

int solve() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));

    int mint = h * 60 + m;

    vector<bool> v(1440, false);

    v[mint] = true;

    while (true) {
        int nxt = (mint + n) % 1440;
        if (v[nxt]) {
            break;
        }
        v[nxt] = true;
        mint = nxt;
    }

    int ans = 0;
    for (int i = 0; i < 1440; i++) {
        if (v[i] && chk(i)) {
            ans++;
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}