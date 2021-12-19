#include <bits/stdc++.h>

using namespace std;

int k = 0;
int row = -1, col = -1;

void solve() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a;

    for (int i = 0; i < m; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }

    for (int i = 1; i < m - 1; i++) {
        if (m - 1 - i < k) {
            break;
        }
        for (int j = 1; j < n - 1; j++) {
            if (n - 1 - j < k) {
                break;
            }

            if (a[i][j] == 0) {
                continue;
            }

            bool change = true;

            for (int t = 1; t <= k; t++) {
                if (a[i - t][j] == 0 || a[i + t][j] == 0 || a[i][j - t] == 0 ||a[i][j + t] == 0) {
                    change = false;
                    break;
                }
            }

            int l = k;

            while(true) {
                if (i - l < 0 || i + l >= n || j - l < 0 || j + l >= n) {
                    break;
                }

                if (a[i - l][j] == 0 || a[i + l][j] == 0 || a[i][j - l] == 0 || a[i][j + l] == 0) {
                    break;
                }
                l++;
                

            }

            if (l > k) {
                k = l;
                row = i;
                col = j;
            }
        }
    }
}

int main() {
    solve();

    if (row == -1 || col == -1) {
        cout << -1 << "\n";

        return 0;
    }

    cout << 4 * k + 1 << "\n";
    cout << row + 1 << " " << col + 1 << "\n";

    return 0;
}