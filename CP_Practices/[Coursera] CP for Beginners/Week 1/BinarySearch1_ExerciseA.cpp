/**
 *    author:    vanloc1808
 *    created:   30-09-2021   10:55:34
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

// int solve(int n) {
//     int k;
//     cin >> k;

//     //int l = -1, r = n;

//     int ans = 0;
//     if (k == n) {
//         ans = (int)log2(n) + 1;
//     }
//     else {
//         ans = (int)log2(n);
//     }

//     return ans;
// }

// int main()
// {
//     fastio;
    
//     int n, m;
//     cin >> n >> m;
//     while(m--) {
//         cout << solve(n) << "\n";
//     }
    
//     return 0;
// }

int solve(int n) {
    int k;
    cin >> k;

    int l = 0, r = n - 1;

    int ans = 0;

    //cout << k << " ";

    while (l <= r) {
        int mid = l + (r - l) / 2;
         //avoid the overflow
        ans++;

        if (mid < k) {
            l = mid + 1;
        } else if (mid > k) {
            r = mid - 1;
        }

        if (mid == k){
            break;
        }
    }

    return ans;
}

int main()
{
    fastio;
    
    int n, m;
    cin >> n >> m;
    //cout << n << " " << m << "\n";
    while(m--) {
        cout << solve(n) << "\n";
    }
    
    return 0;
}