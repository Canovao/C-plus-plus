#ifndef C_PLUS_PLUS_NODE_H
#define C_PLUS_PLUS_NODE_H

template<typename T>
class Node {
public:
    T key;
    Node* left;
    Node* right;

    Node(T key) {
        this->key = key;
        left = right = nullptr;
    }
};

#endif //C_PLUS_PLUS_NODE_H
