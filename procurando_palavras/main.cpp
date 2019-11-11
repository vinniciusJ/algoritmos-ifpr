#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    ifstream arquivo;
    string palavra;
    int cont = 0;

    arquivo.open("textoAlice.txt");

    while(!arquivo.eof()){

        getline(arquivo, palavra);

        int pos = palavra.find("Alice");
        int pos1 = palavra.find("alice");
        int pos2 = palavra.find("ALICE");


        if(pos != -1 || pos1 != -1 || pos2 != -1 ){

            cont++;
        }

    }

    cout << cont << endl;

    arquivo.close();

    return 0;
}
