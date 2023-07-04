#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, string>> productos;
    productos.push_back(make_pair(50, "Kg. Tortillas de Harina"));
    productos.push_back(make_pair(20, "Kg. Naranjas"));
    productos.push_back(make_pair(89, "Mayonesa McCormick 870g"));
    productos.push_back(make_pair(60, "Takis Fuego 260g"));

    cout << "Productos antes del ordenamiento:\n";
    for (auto& producto : productos)
        cout << "$" << producto.first << ' ' << producto.second << '\n';
    cout << '\n';

    sort(productos.begin(), productos.end());

    cout << "Productos despues del ordenamiento:\n";
    for (auto& producto : productos)
        cout << "$" << producto.first << ' ' << producto.second << '\n';

    return 0;
}
