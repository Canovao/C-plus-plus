#include <iostream>
#include "../Classes/BinarySearchTree.h"

using namespace std;

int main() {
    BinarySearchTree<int> tree;

    tree.insert(8);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(6);
    tree.insert(14);
    tree.insert(4);
    tree.insert(7);
    tree.insert(13);

    cout << "Arvore percorrida em ordem: ";
    tree.traverse();
    cout << endl;

    tree.remove(6);
    tree.remove(13);

    int value = 4;
    if (tree.search(value)) {
        cout << "Valor " << value << " encontrado na arvore." << endl;
    } else {
        cout << "Valor " << value << " nao encontrado na arvore." << endl;
    }

    value = 13;
    if (tree.search(value)) {
        cout << "Valor " << value << " encontrado na arvore." << endl;
    } else {
        cout << "Valor " << value << " nao encontrado na arvore." << endl;
    }

    cout << "Arvore percorrida em ordem: ";
    tree.traverse();
    cout << endl;

    return 0;
}
