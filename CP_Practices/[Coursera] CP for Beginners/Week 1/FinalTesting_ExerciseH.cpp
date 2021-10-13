/**
 *    author:    vanloc1808
 *    created:   12-10-2021   12:54:23
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

int solve(vi a, int n, int k) {

    int l = 0, r = n - 1;


    while (l <= r) {
        int mid = l + (r - l) / 2;
         //avoid the overflow

        if (a[mid] < k) {
            l = mid + 1;
        } else if (a[mid] > k) {
            r = mid - 1;
        }

        if (a[mid] == k){
            return mid;
        }
    }

    return -1;

}
int main()
{
    fastio;
    
    int n, m;
    cin >> n >> m;

    vi a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    while(m--) {
        int k;
        cin >> k;

        if (solve(a, a.size(), k) == -1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}