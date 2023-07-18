#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> graph[n];

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});

        // Si fuera no dirigido
        graph[v].push_back({u, w});
    }

    int x = 0, INF = 1 << 28, dist[n];
    for (int i = 0; i < n; i++) 
        dist[i] = INF;
    dist[x] = 0;

    priority_queue<pair<int, int>> pq;
    pq.emplace(0, x);
    while (!pq.empty()) {
        auto [du, u] = pq.top();
        du *= -1;
        pq.pop();

        if (du > dist[u])
            continue;

        for (auto &[v, w] : graph[u]) {
            if (du + w < dist[v]) {
                dist[v] = du + w;
                pq.push({-dist[v], v});
            }
        }
    }
}
