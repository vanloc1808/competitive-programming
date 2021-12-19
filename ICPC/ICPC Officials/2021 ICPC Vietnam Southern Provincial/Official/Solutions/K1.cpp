#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

int main() {
    //freopen("a.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int> a(n); for (int &x : a) cin >> x;

    int ass; cin >> ass;
    int she; cin >> she;

    int ans = 0;
    int dis = abs(ass - she);

    //cout << dis << "\n";

    for (int i = 0; i < n; i++) {
        //cout << abs(a[i] - she) << '\n';
        if (abs(a[i] - she) < dis) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;

}

/*
team206
HohCh0anuy
*/
