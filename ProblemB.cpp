#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];
    long long ans = LONG_LONG_MAX, ansa, ansb;
    for (int i = 0; i < n; ++i) {
        long long res = 0;
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            res += abs(a[i] - a[j]) + abs(b[i] - b[j]);
        }
        if (res < ans) {
            ans = res;
            ansa = a[i]; ansb = b[i];
        }
    }
    cout << ansa << ' ' << ansb << "\n";
}