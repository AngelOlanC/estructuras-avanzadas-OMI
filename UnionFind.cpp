#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> p, size;
    int sets = 0;

    void init(int n) {
        p.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++) {
            p[i] = i;
            size[i] = 1;
        }
        sets = n;
    }

    int find(int u) {
        if (p[u] == u)
            return u;
        return p[u] = find(p[u]);
    } 

    bool same(int u, int v) {
        return find(u) == find(v);
    }

    bool unite(int u, int v) {
        if (same(u, v))
            return false;

        if (size[p[v]] > size[p[u]])
            swap(u, v);
        size[p[u]] += size[p[v]];
        p[p[v]] = p[u];
        sets--;
        return true;
    }
};

int main() {
    UnionFind UF;
    UF.init(5);

    cout << UF.same(1, 2) << '\n';

    cout << UF.same(1, 2) << ' ' << UF.unite(1, 2) << ' ' << UF.same(1, 2) << ' ' << UF.unite(1, 2) << '\n';
}
