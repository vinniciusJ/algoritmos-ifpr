#include <iostream>
#include "descodificador.h"

using namespace std;

int main() {

    string frase;
    cout << "Frase: ";
    getline(cin, frase);

    decodificador(frase);

    return 0;
}