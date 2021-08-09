#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <stdio.h>

bool isEven(int n) {
    return (n % 2 == 0);
}

void printMatrix(int** a, int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int h, int w) {
    int** a = (int**)calloc(h, sizeof(int*));
    for (int i = 0; i < h; i++) {
        a[i] = (int*)calloc(w, sizeof(int));
    }
    bool hEven = isEven(h);
    bool wEven = isEven(w);
    if (wEven && hEven) {
        for (int i = 1; i < w - 1; i += 2) {
            a[0][i] = 1;
        }
        for (int i = 1; i < h - 1; i += 2) {
            a[i][w - 1] = 1;
        }
        for (int i = 2; i < h - 1; i += 2) {
            a[i][0] = 1;
        }
        for (int i = 2; i < w - 1; i += 2) {
            a[h - 1][i] = 1;
        }
    }
    else if (!hEven && wEven) {
        for (int i = 0; i < w; i += 2) {
            a[0][i] = 1;
            a[h - 1][i] = 1;
        }
        for (int i = 2; i < h - 1; i += 2) {
            a[i][0] = 1;
            a[i][w - 1] = 1;
        }
    }
    else if (hEven && !wEven) {
        for (int i = 0; i < w; i += 2) {
            a[0][i] = 1;
        }
        for (int i = 2; i < h; i += 2) {
            a[i][0] = 1;
            a[i][w - 1] = 1;
        }
        for (int i = 2; i < w - 1; i += 2) {
            a[h - 1][i] = 1;
        }
    }
    else {
        for (int i = 0; i < w; i += 2) {
            a[0][i] = 1;
            a[h - 1][i] = 1;
        }
        for (int i = 2; i < h - 1; i += 2) {
            a[i][0] = 1;
            a[i][w - 1] = 1;
        }
    }
    printMatrix(a, h, w);
}

int main()
{
    int T;
    std::cin >> T;
    while (T--) {
        int h, w;
        std::cin >> h >> w;
        solve(h, w);
    }
}

