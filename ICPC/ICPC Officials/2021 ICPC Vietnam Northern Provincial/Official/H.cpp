#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    long long n, x;
    cin >> n >> x;

    long long ans = 0;

    long long sub = (2 * n - 1 + n - x) % MOD;

    long long combi = 0;

    combi = ((n % MOD) * ((2 * n - 1) % MOD)) % MOD;

    ans = combi - sub;

    cout << ans << "\n";
}