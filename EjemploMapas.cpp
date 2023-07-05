#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> edades;

    cout << edades.size() << '\n';

    edades["Juan"] = 18;
    edades["Patricia"] = 15;
    edades["Mauricio"] = 25;
    edades["Pepe"] = 8;

    cout << edades["Maria"] << '\n';

    return 0;
}