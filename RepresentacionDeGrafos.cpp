#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    // Ejemplo de como se utilizarían las 3 formas de representar un grafo

    int n, m;
    cin >> n >> m;

    // Definimos la estructura del grafo como una lista de adyacencia
    vector<int> graph_adjlist[n];

    // Definimos el grafo como una matriz de adyacencia
    int graph_mat[n][n];
    //Asignamos cero a todos los elementos de la matriz
    memset(graph_mat, 0, sizeof graph_mat);
    
    // Definimos la estructura del grafo como una lista de aristas
    vector<pair<int, int>> graph_edgelist;

    for (int i = 0; i < m; i++) {
        // Leemos una arista (u, v)
        int u, v;
        cin >> u >> v;
        graph_adjlist[u].push_back(v);
        graph_mat[u][v] = 1;
        graph_edgelist.push_back(make_pair(u, v));
        
        // Para grafo no dirigido
        graph_adjlist[v].push_back(u);
        graph_mat[v][u] = 1;
    }
}
