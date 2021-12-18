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

    int left = 0, right = 0;
    for (int i = 0; i < n; ++i) {
        left += (a[i] < she);
        right += (a[i] > she);
    }
    if (she == ass) return cout << min(left, right), 0;

    int ans = 0;
    if (she < ass) {
        ans += left;
        int left1 = 0, right1 = 0;
        vector<int> s;
        for (int i = 0; i < n; ++i) {
            if (a[i] > she && a[i] < ass) s.push_back(a[i]);
        }
        sort(s.begin(), s.end());
        //for (int x : s) cout << x << ' '; cout << '\n';
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ass - 1) break;
            if (s[i] < ass) ++ans, ass -= abs(ass - s[i]);
            else break;
        }
    }
    else {
        ans += right;
        vector<int> s;
        for (int i = 0; i < n; ++i) {
            if (a[i] < she && a[i] > ass) s.push_back(a[i]);
        }
        sort(s.begin(), s.end());
        //for (int x : s) cout << x << ' '; cout << '\n';
        for (int i = s.size() - 1; i >= 0; ++i) {
            if (s[i] == ass + 1) break;
            if (s[i] > ass) ++ans, ass += abs(ass - s[i]);
            else break;
        }
    }
    cout << ans;
}

/*
team206
HohCh0anuy
*/
