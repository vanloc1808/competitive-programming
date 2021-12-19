#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n == 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int solve(int n) {
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if ((n - i) % 2 == 1) {
            continue;
        }
        //cout << "x = " << i << "\n";
        int sum1 = digitSum(i);
        int sum2 = digitSum((n - i) / 2);
        //cout << "sum1 = " << sum1 << "\n";
        //cout << "sum2 = " << sum2 << "\n";
        if (isPrime(sum1) && isPrime(sum2)) {
            ans++;
        }
    }
    
    return ans;

}

int main() {
    freopen("res.txt", "w", stdout);
    int n;
    cin >> n;
    
    for (int i = 6; i <= n; i++) {
        cout << "n = " << i << ": " << solve(i) << "\n";
    }

    return 0;
}