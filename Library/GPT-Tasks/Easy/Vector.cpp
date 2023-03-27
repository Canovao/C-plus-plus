/*
 * Crie um vetor de números inteiros e use a função push_back() para inserir novos elementos no final do vetor.
Use a função sort() para ordenar o vetor em ordem crescente ou decrescente.
Experimente com as funções erase() e insert() para remover ou adicionar elementos em posições específicas do vetor.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (int i, int j) { return (i < j); }

void printVectorItems(vector<int> vec);

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){
    vector<int> integers;
    vector<int>::iterator iterator;

    integers.push_back(7);
    integers.push_back(2);
    integers.push_back(9);

    printVectorItems(integers);

    sort(integers.begin(), integers.end(), compare);

    printVectorItems(integers);

    iterator = integers.begin();

    iterator = integers.insert(iterator,300);
    integers.insert(iterator,15);

    printVectorItems(integers);

    iterator = integers.end();

    integers.erase(--iterator);

    printVectorItems(integers);

    sort(integers.begin(), integers.end(), compare);

    printVectorItems(integers);

    return 0;
}

void printVectorItems(vector<int> vec){
    for (int item: vec) {
        cout << item << endl;
    }
    cout << "----" << endl;
}