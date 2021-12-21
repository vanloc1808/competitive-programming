/**
 *    author:    vanloc1808
 *    created:   21-12-2021   09:31:10
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

string solve() {
    long long a, s;
    cin >> a >> s;

    string b = "";

    while (s > 0) {
        long long amod = a % 10;
        long long smod = s % 10;
        long long bmod = (smod - amod + 10) % 10;

        b = to_string(bmod) + b;
        if (amod + bmod == smod) {
            a /= 10;
            s /= 10;
        } else if (amod + bmod == s % 100) {
            a /= 10;
            s /= 100;
        } else {
            return "-1";
        }
    }

    if (a > 0) {
        return "-1";
    }

    string ans = "";
    
    int i = 0;
    while (b[i] == '0') {
        i++;
    }

    for (int j = i; j < b.length(); j++) {
        ans += b[j];
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