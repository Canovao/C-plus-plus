/*
 * Crie uma lista de palavras e use a função push_back() para inserir novas palavras no final da lista.
Use a função sort() para ordenar a lista em ordem alfabética.
Experimente com as funções erase() e insert() para remover ou adicionar palavras em posições específicas da lista.
 */

/*
 * tentei com lista de string, mas é insanamente difícil, não vale a pena
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printListItems(const vector<string>& lit);
bool compare(const string& a, const string& b){ return a<b;}

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){
    vector<string> palavras;

    palavras.emplace_back("Laranja");
    palavras.emplace_back("Abacaxi");
    palavras.emplace_back("Bacate");

    printListItems(palavras);

    sort(palavras.begin(), palavras.end(), compare);

    printListItems(palavras);

    return 0;
}

void printListItems(const vector<string>& lit){
    for (const string& item: lit) {
        cout << item << endl;
    }
    cout << "----" << endl;
}