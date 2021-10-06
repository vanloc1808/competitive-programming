/**
 *    author:    vanloc1808
 *    created:   06-10-2021   20:21:59
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

int steps = 0;

int findGCD(int a, int b) {
    steps++;
    if (a < b) {
        return findGCD(b, a);
    }

    if (b == 0) {
        return a;
    }

    return findGCD(b, a % b);
}

int solve() {
    return 0;
}   

int main()
{
    fastio;
    
    int a, b;
    cin >> a >> b;
    int _gcd = findGCD(a, b);

    cout << steps - 1 << "\n";
    
    return 0;
}