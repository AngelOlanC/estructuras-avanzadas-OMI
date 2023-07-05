#include <bits/stdc++.h>
using namespace std;

void imprimirSet(set<int>& s) {
    // ciclo for each, aun mas corto jaja 
    for (int x : s)
        cout << x << " ";
    cout << '\n';
}

int main() {
    set<int> s;

    s.insert(1);
    imprimirSet(s);

    s.insert(2);
    imprimirSet(s);

    s.insert(3);
    imprimirSet(s);

    s.insert(4);
    imprimirSet(s);

    s.insert(4);
    imprimirSet(s);

    // Busca en el set S al elemento dado, si lo encuentra retorna un 1 y si no, un 0.
    cout << s.count(5) << ' ' << s.count(4) << '\n';

    cout << "\nTamanio del conjunto: " << s.size() << '\n';

    cout << "\nAntes de realizar la eliminacion:\n";
    imprimirSet(s);

    s.erase(5);

    cout << "Despues de realizar la eliminacion:\n";
    imprimirSet(s);

    cout << "\nTamanio del conjunto: " << s.size() << '\n';

    cout << "\nAntes de realizar la eliminacion:\n";
    imprimirSet(s);

    s.erase(4);

    cout << "Despues de realizar la eliminacion:\n";
    imprimirSet(s);

    cout << "\nTamanio del conjunto: " << s.size() << '\n';
    
    return 0;
}