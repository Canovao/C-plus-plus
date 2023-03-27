#ifndef C_PLUS_PLUS_BINARYSEARCHTREE_H
#define C_PLUS_PLUS_BINARYSEARCHTREE_H

#include <iostream>
#include "Node.h"

template<typename T>
class BinarySearchTree {
private:
    Node<T>* root;

public:
    BinarySearchTree() {
        root = nullptr;
    }

    ~BinarySearchTree() {
        destroyTree(root);
    }

    void insert(T key) {
        root = insert(key, root);
    }

    void remove(T key) {
        root = remove(key, root);
    }

    bool search(T key) {
        return search(key, root);
    }

    void traverse() {
        traverse(root);
    }

private:
    Node<T>* insert(T key, Node<T>* node) {
        if (node == nullptr) {
            return new Node(key);
        }

        if (key < node->key) {
            node->left = insert(key, node->left);
        } else if (key > node->key) {
            node->right = insert(key, node->right);
        }

        return node;
    }

    Node<T>* remove(T key, Node<T>* node) {
        if (node == nullptr) {
            return nullptr;
        }

        if (key < node->key) {
            node->left = remove(key, node->left);
        } else if (key > node->key) {
            node->right = remove(key, node->right);
        } else {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            } else if (node->left == nullptr) {
                Node<T>* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node<T>* temp = node->left;
                delete node;
                return temp;
            } else {
                Node<T>* minRight = findMin(node->right);
                node->key = minRight->key;
                node->right = remove(minRight->key, node->right);
            }
        }

        return node;
    }

    bool search(int key, Node<T>* node) {
        if (node == nullptr) {
            return false;
        }

        if (key == node->key) {
            return true;
        } else if (key < node->key) {
            return search(key, node->left);
        } else {
            return search(key, node->right);
        }
    }

    void traverse(Node<T>* node) {
        if (node != nullptr) {
            traverse(node->left);
            std::cout << node->key << " ";
            traverse(node->right);
        }
    }

    Node<T>* findMin(Node<T>* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    void destroyTree(Node<T>* node) {
        if (node != nullptr) {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }
};


#endif //C_PLUS_PLUS_BINARYSEARCHTREE_H
