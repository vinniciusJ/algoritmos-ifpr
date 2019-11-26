#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector < vector <string> > coletarDados(){

    ifstream arquivo;
    vector < vector <string> > dadosClientes;
    string dado, cliente, sub;
    vector <string> dadosCliente;

    arquivo.open("/home/ensino-integrado/provadealgoritmos/clientes.txt");

    while(!arquivo.eof()){

        getline(arquivo, cliente);
        sub = cliente;

        for(int i  = 0; i < 4; i++){

            int pos = sub.find(';');

            for(int j = 0; j < pos; j++){

                dado = dado + sub[j];
            }

            dadosCliente.push_back(dado);
            sub.erase(0, pos);
        }

    }

    arquivo.close();

    for(int i = 0; i < (dadosCliente.size()/4); i++){

        for(int j = 1; j < 4; j++){

        if(i == 1){

            dadosClientes[i].push_back(dadosCliente[j+1]);

        }
        else {

            dadosClientes[i].push_back(dadosCliente[j]);
        }


        }

    }

    return dadosClientes;

}

int main()
{

    vector <vector <string>> clientes =  coletarDados();

    cout << "Clientes: " << endl;

    for(int i = 0; i < clientes.size(); i++){

        cout << clientes[i][0] << endl;

        for(int j = 0; j < clientes[i].size(); j++){

            cout << clientes[i][j] << endl;
        }
    }

    return 0;
}
