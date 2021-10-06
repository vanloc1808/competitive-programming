/**
 *    author:    vanloc1808
 *    created:   29-09-2021   08:54:43
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

bool solve() {
    string s;
    cin >> s;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'B') {
            b++;
        } else {
            c++;
        }
    }

    if (b == a + c) {
        return true;
    }

    return false;
} 

int main()
{
    fastio;
    
    int t;
    cin >> t;
    while(t--) {
        if (solve() == true) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}