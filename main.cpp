#include <iostream>
#include <vector>
#include <string>

using namespace std;

string criptografar(string word){

    vector <char> letras = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't','u',
                            'v', 'w', 'x', 'y', 'z'};

    vector <char> teste;
    vector <int> pos;

    for(int i = 0; i<word.size(); i++){

        teste.push_back(word[i]);


    }

    for(int i = 0; i<teste.size(); i++){

        for(int j = 0; j<letras.size(); j++){

            if(teste[i] == letras[j]){

                pos.push_back(j);
            }
        }
    }

    for(int i = 0; i<word.size(); i++){

    cout << "Chave " << i << endl << endl;

       for(int j = 0; j < teste.size(); j++){

            int it = teste[j] - i;

            if(teste[j] - 1 < 0){

                it = it + 26;

                cout << letras[it] << endl;
            }
            else {

                cout << letras[it] << endl;
            }
       }

    }


}


int main(){

    string word, wordCript ;

    cout << "Digite a frase: " << endl;

    getline(cin, word);

    wordCript = criptografar(word);

    return 0;
}
