#include <iostream>
#include <vector>
#include <string>

using namespace std;

void decodificador(string palavra){

    vector <char> letras = {'a','b','c','d','e','f','g','h','i','j','k','l', 'm', 'n', 'o','p','q','r','s',
                            't','u','v','w','x','y','z'};
    vector <int> posicoes;
    posicoes.clear();

    int verificador = 0;

    for(int i = 0; i < (int)palavra.size(); i++){
        for (int j = 0; j < 26; ++j) {
            if(palavra[i] == letras[j]){
                posicoes.push_back(j);
                verificador++;

            }
        }
        if(verificador != 1){
            posicoes.push_back(-1);
        }

        verificador = 0;
    }

   for(int i = 0; i<26; i++){

        cout << i+1 << " Possibilidade" << endl << endl;

        for(int j = 0; j < (int) palavra.size(); j++){

            if(posicoes[j] == -1){

                cout << " ";
            }
            else {
                int pos = posicoes[j] - i;

                if(pos < 0){

                    pos = pos + 26;
                    cout << letras[pos] ;
                }
                else {
                    cout << letras[pos];
                }
            }
        }

        cout << endl << endl;
    }
}
