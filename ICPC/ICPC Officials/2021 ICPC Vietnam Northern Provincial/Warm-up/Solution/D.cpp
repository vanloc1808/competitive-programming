#include "bits/stdc++.h"

using namespace std;

const int maxN = 1e5 + 5;

vector<int> adj[maxN];
int n, up[maxN][20], depth[maxN];


void dfs(int v) {
    for (int i = 1; i < 20; ++i) {
        up[v][i] = up[up[v][i - 1]][i - 1];
    }

    for (int x : adj[v]) {
        if (x != up[v][0]) {
            depth[x] = depth[up[x][0] = v]+1;
            dfs(x);
        }
    }
}

int jump(int x, int d) {
    for (int i = 0; i < 20; ++i) {
        if ((d >> i) & 1)
            x = up[x][i];
    }
    return x;
}

int LCA(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);

    a = jump(a, depth[a] - depth[b]);
    if (a == b) return a;

    for (int i = 19; i >= 0; --i) {
        int aT = up[a][i], bT = up[b][i];
        if (aT != bT) a = aT, b = bT;
    }

    return up[a][0];
}


signed main() {
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;

    for (int i = 0, u, v; i < n - 1; ++i)
        cin >> u >> v, --u, --v,
        adj[u].push_back(v),
        adj[v].push_back(u);

    up[0][0] = 0, depth[0] = 0;
    dfs(0);

    int q; cin >> q; while (q--) {
        int a, b; cin >> a >> b, --a, --b;
        cout << depth[a] + depth[b] - 2 * depth[LCA(a, b)] << '\n';
    }
}

/*
6
1 2
1 3
2 4
2 5
4 6
3
4 6
5 6
3 6
*/
