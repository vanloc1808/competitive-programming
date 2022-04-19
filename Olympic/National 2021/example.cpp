#include <bits/stdc++.h>
using namespace std;
int x[5], y[5];

int main(){
    int n, k;
    cin >> n >> k;
    cout << "ASK " << 1 << " " << 1 << endl;
    for (int i = 1; i < k; ++i) cin >> x[i] >> y[i];
    cout << "ANSWER" << endl;
    for (int t=1, i=1, j=1; t <= n*n*k; ++t){
        for (int z = 1; z <= k; ++z){
            if (++j > n*n*k) ++i, j=1;
            if (x[2] == 1) cout << i << ' ' << j << ' ';
            else cout << j << ' ' << i << ' ';
        }
        cout << endl;
    }
}