//
// Created by Amir Yeshurun on 2020-04-21.
//

#ifndef OOP_NODE_H
#define OOP_NODE_H

#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;
    Node* prev;
public:
    Node();
    Node(int newData);

    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);

    Node *getPrev() const;

    void setPrev(Node *prev);

    ~Node();
};


#endif //OOP_NODE_H
