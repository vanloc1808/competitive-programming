#include <bits/stdc++.h>

using namespace std;

#define MAX 100000
#define log 17

vector<int> level(MAX);
vector<vector<int>> lca(MAX, vector<int>(log));
vector<vector<int>> dist(MAX, vector<int>(log));

vector<vector<pair<int, int>>> edges(MAX);

void addEdge(int u, int v, int weight) {
    edges[u].push_back(make_pair(v, weight));
    edges[v].push_back(make_pair(u, weight));
}

void dfs(int node, int parent, int h, int weight) {
    lca[node][0] = parent;

    level[node] = h;

    if (parent != -1) {
        dist[node][0] = weight;
    }

    for (int i = 1; i < log; i++) {
        if (lca[node][i - 1] != -1) {
            lca[node][i] = lca[lca[node][i - 1]][i - 1];
            dist[node][i] = dist[node][i - 1] + dist[lca[node][i - 1]][i - 1];
        }
    }

    for (auto &edge : edges[node]) {
        if (edge.first != parent) {
            dfs(edge.first, node, h + 1, edge.second);
        }
    }
}

void findDistance(int u, int v) {
    int ans = 0;

    if (level[u] > level[v]) {
        swap(u, v);
    }

    for (int i = log - 1; i >= 0; i--) {
        if (lca[v][i] != -1 && level[lca[v][i]] >= level[u]) {
            ans += dist[v][i];
            v = lca[v][i];
        }
    }

    if (u == v) {
        cout << ans << "\n";
    } else {
        for (int i = log - 1; i >= 0; i--) {
            if (lca[v][i] != lca[u][i]) {
                ans += dist[u][i] + dist[v][i];
                u = lca[u][i];
                v = lca[v][i];
                
            }
        }
        
        cout << ans << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, 1);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < log; j++) {
            lca[i][j] = -1;
            dist[i][j] = 0;
        }
    }

    dfs(1, -1, 0, 1);

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        findDistance(u, v);
    }

    return 0;
}