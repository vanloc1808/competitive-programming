/**
 *    author:    vanloc1808
 *    created:   25-12-2021   16:01:04
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

long long solve() {
    int n;
    cin >> n;

    vi a;
    set<int> s;

    for (int i = 1; i <= n; i++) {
        s.insert(i);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (s.count(x) == 1) {
            s.erase(x);
        } else {
            a.pb(x);
        }
    }

    sort(allr(a));

    bool quit = false;

    for (auto& x : a) {
        auto it = s.end(); 
        it--;

        int y = *it;

        if (y > (x - 1) / 2) {
            quit = true;

            break;
        }

        s.erase(it);
    }

    if (quit == true) {
        return -1;
    } 

    return a.size();
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