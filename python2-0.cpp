#include <iostream>
#include <vector>
#include <string>
#include<cstdlib>
#include <cstring>
#include <ctime>
#include <locale.h>
#include <algorithm>

using namespace std;

//Declarando os prot�tipos das fun��es: 1� - para n�o gerar numeros iguais; 2� - para gerar os n�meros;

bool Existe(vector <int> valores,int tam, int valor);
void GeraAleatorios(vector <int> numeros, int  quantNumeros, int Limite, string palavra );

int main (){

    setlocale(LC_ALL, "Portuguese");

        string palavraAleatoria;
        cout << "Digite uma palavra: ";
        cin >> palavraAleatoria;
        vector <int> numeros;
        numeros.clear();

        cout << endl << "ORDEM ALEAT�RIA DA PALAVRA: ";

        GeraAleatorios(numeros, palavraAleatoria.length(), palavraAleatoria.length(), palavraAleatoria);

        cout << endl <<"ORDEM ALFAB�TICA DA PALAVRA: ";

        sort(begin(palavraAleatoria), end(palavraAleatoria));

        for(int i=0; i<palavraAleatoria.length()+1; i++){
            cout << palavraAleatoria[i];
        }

    return 0;
}
bool Existe(vector <int> Valores,int tam, int valor){

    for(int i = 0;i<tam; i++){
       //Conferindo se n�o existe nenhum um valor repetido na lista

        if (Valores[i]==valor){
            return true;
        }
    }
    return false;
}
void GeraAleatorios(vector <int> numeros, int  quantNumeros, int Limite, string palavra) {

    srand(time(NULL));

    int v;
    for(int i=0;i<quantNumeros;i++){
        v = rand() % Limite;

        while(Existe(numeros, i, v)){
            v = 0;
            v = rand() % Limite;
        }
            numeros.push_back(v);
    }

    for(int i=0; i<palavra.length(); i++){
            cout << palavra[numeros[i]];
    }


}
