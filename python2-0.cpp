#include <iostream>
#include <vector>
#include <string>
#include<cstdlib>
#include <cstring>
#include <ctime>
#include <locale.h>
#include <algorithm>

using namespace std;

//Declarando os protótipos das funções: 1º - para não gerar numeros iguais; 2ª - para gerar os números;

bool Existe(vector <int> valores,int tam, int valor);
void GeraAleatorios(vector <int> numeros, int  quantNumeros, int Limite, string palavra );

int main (){

    setlocale(LC_ALL, "Portuguese");

        string palavraAleatoria;
        cout << "Digite uma palavra: ";
        cin >> palavraAleatoria;
        vector <int> numeros;
        numeros.clear();

        cout << endl << "ORDEM ALEATÓRIA DA PALAVRA: ";

        GeraAleatorios(numeros, palavraAleatoria.length(), palavraAleatoria.length(), palavraAleatoria);

        cout << endl <<"ORDEM ALFABÉTICA DA PALAVRA: ";

        sort(begin(palavraAleatoria), end(palavraAleatoria));

        for(int i=0; i<palavraAleatoria.length()+1; i++){
            cout << palavraAleatoria[i];
        }

    return 0;
}
bool Existe(vector <int> Valores,int tam, int valor){

    for(int i = 0;i<tam; i++){
       //Conferindo se não existe nenhum um valor repetido na lista

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
