#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n; cin >> n;
    long double ans = 1.0, temp = 1.0;
    for (int i = 1; i <= n; ++i)
        temp /= (long double)i,
        ans += temp,
        //cout << ans << ' ';
    cout << setprecision(20);
    cout << fixed << ans;
}
