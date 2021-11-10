#include <iostream>

int someSum(int n, int& asgn, int&cmp) {
    int sum = 0; ++asgn;
    int i = 1, j; ++asgn;

    while(++cmp && i <= n) {
        j = n - i; ++asgn;
        while(++cmp && j <= i * i) {
            sum = sum + i * j; ++asgn;
            j += 1; ++asgn;
        }
        i += 1; ++asgn;
    }
    return sum;
}

int main() {
    for (int i = 0; i <= 1000; i += 25) {
        int asgn = 0, cmp = 0;
        someSum(i, asgn, cmp);
        std::cout << i << " " << asgn << " " << cmp << "\n";
    }
}