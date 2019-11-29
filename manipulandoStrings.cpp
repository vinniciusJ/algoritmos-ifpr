#include <iostream>
#include <string>
#include <vector>

using namespace std;


int contarCaracteres (string fraseParametro);
int contarPalavras (string fraseParametro);
int contarLetrasA (string fraseParametro);
vector <string> stringParaLista (string fraseParametro);

int main(){

    string frase = "bom dia foz";

    cout << "Quantidade de caracteres: " << contarCaracteres(frase) << endl;
    cout << "Quantidade de palavras: " << contarPalavras(frase) << endl;
    cout << "Quantidade de letras 'A': " << contarLetrasA(frase) << endl;


    return 0;
}

int contarCaracteres (string fraseParametro){

    return fraseParametro.length();
}

int contarPalavras (string fraseParametro){

    int qtdPalavras = 1;
    int pos = -1;
    string sub = fraseParametro;


    do{

       pos = sub.find(' ');

       if(pos != -1){

            qtdPalavras++;
            sub = sub.substr(pos + 1);
       }


    }while(pos != -1);

    return qtdPalavras;
}
int contarLetrasA (string fraseParametro){

    int qtdA = 0;

    for(int i = 0; i < fraseParametro.length(); i++){

        if(fraseParametro[i] == 'a' || fraseParametro[i] == 'A'){

            qtdA ++;
        }
    }

    return qtdA;
}
vector <string> stringParaLista(string fraseParametro){

    int pos = -1;
    int qtdRepetidas = 0;
    vector <string> palavras;

    do{

        pos = fraseParametro.find(' ');
        fraseParametro.substr(pos + 1);

    }while(pos != -1);

}

