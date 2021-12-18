#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int solve(int n) {
	int res = 0;
	std::cin >> n;
	while (n > 0) {
		res = std::max(res, n % 10);
		n /= 10;
	}
	return res;
}

int main() {
	int T;
	std::cin >> T;
	int n = 0;
	while (T--) {
		std::cout << solve(n) << "\n";
	}
	return 0;
}