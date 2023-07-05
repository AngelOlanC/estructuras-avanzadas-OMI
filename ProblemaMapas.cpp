#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    map<string, string> traduccion;

    for (int i = 0; i < n; i++) {
        string palabraLocal, palabraExtranjera; 
        cin >> palabraLocal >> palabraExtranjera;
        traduccion[palabraExtranjera] = palabraLocal;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string palabraExtranjera;
        cin >> palabraExtranjera;

        if (traduccion.count(palabraExtranjera) == 0) {
            cout << "Eh\n";
        }
        else {
            cout << traduccion[palabraExtranjera] << '\n';
        }
    }

    /*
    5
    dog ogday
    cat atcay
    pig igpay
    froot ootfray
    loops oopslay

    3
    atcay
    ittenkay
    oopslay
    */

    // Codigo para recorrer mi mapa
    for (auto it = traduccion.begin(); it != traduccion.end(); it++) {
        cout << it->first << " " << it->second << '\n';
    }

    return 0;
}