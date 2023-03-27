/*
 * Crie um conjunto de números inteiros e use a função insert() para adicionar novos elementos ao conjunto.
Use a função find() para procurar por um elemento específico no conjunto.
Experimente com as funções erase() e clear() para remover elementos do conjunto.
 */

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

bool compare (int i, int j) { return (i < j); }

void printSetItems(const set<int>& st);

void findItemInSet(int item, set<int> st);

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){
    set<int> integers;

    integers.insert(1);
    integers.insert(2);
    integers.insert(3);
    integers.insert(4);
    integers.insert(5);

    findItemInSet(6, integers);
    findItemInSet(3, integers);
    findItemInSet(5, integers);

    printSetItems(integers);

    integers.erase(4);

    printSetItems(integers);

    integers.clear();

    printSetItems(integers);

    return 0;
}

void findItemInSet(int item, set<int> st){
    int num = st.find(item).operator*();
    if(st.find(item) == st.end()){
        cout << "["<< item <<"] Not found in set" << "\n----" << endl;
    }else{
        cout <<  num << "\n----" << endl;
    }
}

void printSetItems(const set<int>& st){
    for (int item: st) {
        cout << item << endl;
    }
    cout << "----" << endl;
}