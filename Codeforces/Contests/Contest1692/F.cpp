/**
 *    author:    vanloc1808
 *    created:   14-06-2022   22:28:20
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
    int n;
    cin >> n;

    //vi a(n);
    vi cnt(10, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 1){
            if (cnt[i] >= 3){
                cout << "YES\n";
                return;
            }
        }
        for (int j = i + 1; j < 10; j++) {
            if ((2 * i + j) % 10 == 3){
                if (cnt[i] >= 2 && cnt[j] >= 1){
                    cout << "YES\n";
                    return;
                }
            }
            if ((i + 2 * j) % 10 == 3){
                if (cnt[i] >= 1 && cnt[j] >= 2){
                    cout << "YES\n";
                    return;
                }
            }
            for (int k = j + 1; k < 10; k++) {
                if ((i + j + k) % 10 == 3) {
                    if (cnt[i] > 0 && cnt[j] > 0 && cnt[k] > 0) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}