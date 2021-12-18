/**
 *    author:    vanloc1808
 *    created:   27-09-2021   16:29:40
**/

#include <bits/stdc++.h>

int solve() {
    int n;

    std::cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr,arr + n);

    int res = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            res++;
            i++;
        }
    }

    delete arr;

    return res  / 2;
}

int main() {

    std::cout << solve();

    return 0;
}
