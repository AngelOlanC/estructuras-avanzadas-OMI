vector<int> graph[MAXN];
bool visited[MAXN];

void DFS(int u) {
    visited[u] = 1;
    for (int v : graph[u]) {
        if (visited[v])
            continue;
        DFS(v);
    }
}
