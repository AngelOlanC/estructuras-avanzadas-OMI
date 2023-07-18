#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> graph[n];

    // Se leen las aristas

    // Preparativos
    int nodo_inicial = 0;

    int dist[n];
    memset(dist, -1, sizeof dist); // Inicializado en -1
    dist[nodo_inicial] = 0;

    queue<int> q;
    q.push(nodo_inicial);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto &v : graph[u]) {
            if (dist[v] != -1)
                continue;
            dist[v] = dist[u] + 1;
            q.push(v);
        } 
    }
}
