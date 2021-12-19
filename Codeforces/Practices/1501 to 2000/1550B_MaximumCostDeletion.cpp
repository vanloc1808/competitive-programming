#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

long long solve(int n, int a, int b, std::string s) {
    int uni = std::unique(s.begin(), s.end()) - s.begin();
    int cnt = std::max(n * b, (uni / 2 + 1) * b);
    return 1LL * (a * n + cnt);
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;
        std::string s;
        std::cin >> s;
        std::cout << solve(n, a, b, s) << "\n";
    }
}

