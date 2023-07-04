#include <bits/stdc++.h>

using namespace std;

struct Nodo {
   int dato;
   Nodo* hijoIzquierdo = nullptr;
   Nodo* hijoDerecho = nullptr;
};

bool agregarNodo(Nodo* nodoActual, int datoNuevo) {
    if (datoNuevo < nodoActual->dato) {
        if (nodoActual->hijoIzquierdo == nullptr) {
            nodoActual->hijoIzquierdo = new Nodo();
            nodoActual->hijoIzquierdo->dato = datoNuevo;
            return true;
        }

        return agregarNodo(nodoActual->hijoIzquierdo, datoNuevo);
    }

    if (datoNuevo > nodoActual->dato) {
        if (nodoActual->hijoDerecho == nullptr) {
            nodoActual->hijoDerecho = new Nodo();
            nodoActual->hijoDerecho->dato = datoNuevo;
            return true;
        }

        return agregarNodo(nodoActual->hijoDerecho, datoNuevo);
    }

    return false;
}

Nodo* buscarNodo(Nodo* nodoActual, int dato) {
    if (nodoActual == nullptr)
        return nullptr;
    if (nodoActual->dato == dato)
        return nodoActual;
    if (dato < nodoActual->dato)
        return buscarNodo(nodoActual->hijoIzquierdo, dato);
    if (dato > nodoActual->dato)
        return buscarNodo(nodoActual->hijoDerecho, dato);
    return nullptr; 
}

void preOrden(Nodo* nodoActual) {
    if (nodoActual == nullptr)
        return;
    cout << nodoActual->dato << ' ';
    preOrden(nodoActual->hijoIzquierdo);
    preOrden(nodoActual->hijoDerecho);
}

void inOrden(Nodo* nodoActual) {
    if (nodoActual == nullptr)
        return;
    inOrden(nodoActual->hijoIzquierdo);
    cout << nodoActual->dato << ' ';
    inOrden(nodoActual->hijoDerecho);
}

void posOrden(Nodo* nodoActual) {
    if (nodoActual == nullptr)
        return;
    posOrden(nodoActual->hijoIzquierdo);
    posOrden(nodoActual->hijoDerecho);
    cout << nodoActual->dato << ' ';
}

int main() {
    // algunas pruebas
    Nodo* miRaiz = new Nodo();
    
    // Como son punteros, importante utilizar '->' y no '.' (se usa igual) 
    miRaiz->dato = 5;

    cout << miRaiz->dato << '\n';

    inOrden(miRaiz);
    cout << '\n';

    cout << agregarNodo(miRaiz, 4) << ' ' << agregarNodo(miRaiz, 5) << ' ' << agregarNodo(miRaiz, 6) << ' ' << agregarNodo(miRaiz, 7) << '\n';

    cout << "SE BUSCA >:)\n";
    cout << (buscarNodo(miRaiz, 1) == nullptr) << ' ' << (buscarNodo(miRaiz, 4) == nullptr) << ' ' << (buscarNodo(miRaiz, 7) == nullptr) << ' ' << (buscarNodo(miRaiz, 9) == nullptr) << '\n';

    inOrden(miRaiz);
}
