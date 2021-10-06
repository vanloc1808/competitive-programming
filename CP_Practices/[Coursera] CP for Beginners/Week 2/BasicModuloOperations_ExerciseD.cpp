/**
 *    author:    vanloc1808
 *    created:   05-10-2021   12:53:15
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

long long M;

long long power(long long x, int n) {
    long long root = power(x, n / 2);

    if (n % 2 == 0) {
        return ((root % M) * (root % M)) % M;
    } 
    return ((root % M) * (root % M) * (x % M)) %M;
}

long long value(vll a, int n, int x) {
    long long res = 0;
    for (int i = 0; i <= n; i++) {
        res += (power(x, n - i)) % M;
    }

    return res;
}

long long solve() {

}

int main()
{
    fastio;
    
    
    
    return 0;
}