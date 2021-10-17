/**
 *    author:    vanloc1808
 *    created:   16-10-2021   06:36:09
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

long long findGCD(long long a, long long b) {
    if (a < b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    if (b == 0) {
        return a;
    }

    if (a % b == 0) {
        return b;
    }

    return findGCD(b, a % b);
}

long long solve() {
    long long a, b;
    cin >> a >> b;

    double product = 1.00 * a * b;

    double lcm = product / (1.00 * findGCD(a, b));

    //cout << findGCD(a, b) << "\n";

    if (lcm < pow(10, 18)) {
        return lcm;
    }

    return -1;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}