#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n + 1);

    for (int i = 1; i <= n; i++) {
        int q, t;
        cin >> q >> t;

        a[i] = make_pair(q, t);
    }

    int next = 1;
    long long ans = 0;

    while (next <= n) {
        ans += 1LL * a[next].first;

        next += 2 * a[next].second;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
