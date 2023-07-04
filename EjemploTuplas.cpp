#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<tuple<int, string, string>> productos;
    productos.push_back(make_tuple(50, "Kg. Tortillas de Harina", "18/10/2023"));
    productos.push_back(make_tuple(20, "Kg. Naranjas", "25/07/2023"));
    productos.push_back(make_tuple(89, "Mayonesa McCormick 870g", "01/05/2024"));
    productos.push_back(make_tuple(60, "Takis Fuego 260g", "31/08/2024"));

    cout << "Productos antes del ordenamiento:\n";
    for (auto& producto : productos)
        cout << "$" << get<0>(producto) << ' ' << get<1>(producto) << " " << get<2>(producto) << '\n';
    cout << '\n';

    sort(productos.begin(), productos.end());

    cout << "Productos despues del ordenamiento:\n";
    for (auto& producto : productos)
        cout << "$" << get<0>(producto) << ' ' << get<1>(producto) << " " << get<2>(producto) << '\n';

    return 0;
}
