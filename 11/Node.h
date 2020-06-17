#ifndef __NODE__H_
#define __NODE__H_

#include <iostream>

using namespace std;

template <class T>
class Node{
private:
    T* data;
    Node<T>* left;
    Node<T>* right;
public:
    Node() : data(nullptr), left(nullptr), right(nullptr) {}
    Node(const T& value) : left(nullptr), right(nullptr) {
        data = new T(value); //copy CTOR
    } 

    void setValue(const T& value) {
        data = new T(value);
    }
    void setLeft(Node<T>* newLeft) {
        left = newLeft;
    }
    void setRight(Node<T>* newRight) {
        right = newRight;
    }

    const Node<T>* getLeft() const { return left; }
    const Node<T>* getRight() const { return right; }
    const T& getData() const { return *data; }

    void insert(Node<T>* newNode) {
        if(*data <= *(newNode->data)) {
            if(right) 
                right->insert(newNode);
            else // right is nullptr
                right = newNode;
        }
        else { // the new data is smaller
            if(left)
                left->insert(newNode);
            else // left is nullptr
                left = newNode;
        }
    }

    void infix(ostream& out) {
        // L, C, R
        if(left)
            left->infix(out);
        out << *data << " ";
        if(right)
            right->infix(out);
    }
};
#endif