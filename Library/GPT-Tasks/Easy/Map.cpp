/*
 * Crie um mapa que associe nomes a idades e use a função insert() para adicionar novas entradas ao mapa.
Use a função find() para procurar a idade de uma pessoa específica no mapa.
Experimente com as funções erase() e clear() para remover entradas do mapa.
 */

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool compare (int i, int j) { return (i < j); }

void printThem(const pair<string, int>& par);

void printMapItems(const  map<string, int>& mp);

void findItemInSet(const string& item,  map<string, int> mp);

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){
    map<string, int> pessoasComIdades;

    pessoasComIdades.insert({"Nicolas", 18});
    pessoasComIdades.insert({"Fernando", 6});
    pessoasComIdades.insert({"Octopus", 328});

    printMapItems(pessoasComIdades);

    findItemInSet("Nicolas", pessoasComIdades);
    findItemInSet("Laranja", pessoasComIdades);

    pessoasComIdades.erase("Nicolas");

    printMapItems(pessoasComIdades);

    pessoasComIdades.clear();

    printMapItems(pessoasComIdades);

    return 0;
}

void findItemInSet(const string& item,  map<string, int> mp){
    if(mp.find(item) == mp.end()){
        cout << "[" << item << "] Not found in map" << endl;
    }else{
        pair<string, int> content = mp.find(item).operator*();
        cout << "Item found in Map:\n" << content.first << endl << content.second << endl;
    }
    cout << "----" << endl;
}

void printThem(const pair<string, int>& par){
    cout << par.first << endl << par.second << endl;
}

void printMapItems(const  map<string, int>& mp){
    std::for_each(mp.begin(), mp.end(), printThem);
    cout << "----" << endl;
}