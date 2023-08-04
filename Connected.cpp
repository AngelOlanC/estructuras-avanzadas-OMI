#include <bits/stdc++.h>
using namespace std;

// Un poquito mas de la n maxima
constexpr int MAXN = 505;

vector<int> grafo[MAXN];
bool visitado[MAXN];

void dfs(int nodo) {
    visitado[nodo] = true;
    for (int vecino : grafo[nodo])
        if (!visitado[vecino])
            dfs(vecino);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        // Leemos las m aristas
        int nodoA, nodoB;
        cin >> nodoA >> nodoB;
        grafo[nodoA].push_back(nodoB);
        grafo[nodoB].push_back(nodoA);
    }

    int a, b;
    cin >> a >> b;
    dfs(a);

    // Pudimos llegar al nodo b desde el nodo a
    if (visitado[b]) {
        cout << "YES\n";
    }
    else { // No alcanzable
        cout << "NO\n";
    }
}
