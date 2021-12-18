#include <iostream>

int solve(int n, int*& a) {
    a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int res = n + n - 1;
    for (int i = 1; i < n - 1; i++) {
        bool condition1 = (a[i] > a[i - 1]) && (a[i] > a[i + 1]);
        bool condition2 = (a[i] < a[i - 1]) && (a[i] < a[i + 1]);
        if (condition1 || condition2) {
            res++;
        }
    }

    for (int i = 0; i < n - 3; i++) {
        bool condition1 = (a[i + 1] > a[i]) && (a[i + 1] > a[i + 2]) && (a[i + 2] < a[i + 3]) && (a[i] > a[i + 2]) && (a[i + 1] > a[i + 3]);
        bool condition2 = (a[i + 1] < a[i]) && (a[i + 1] < a[i + 2]) && (a[i + 2] > a[i + 3]) && (a[i] < a[i + 2]) && (a[i + 1] < a[i + 3]);
        if (condition1 || condition2) {
            res++;
        }
    }
    free(a);
    a = NULL;
    return res;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        int* a = NULL;
        std::cout << solve(n, a) << "\n";
    }
    return 0;
}
