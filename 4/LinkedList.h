//
// Created by Amir Yeshurun on 2020-04-21.
//

#ifndef OOP_LINKEDLIST_H
#define OOP_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node* head;
    int size;
public:
    LinkedList();
    const Node* getHead() const;
    void insert(int data, Node* ptr = nullptr);

    int getSize() const;
    ~LinkedList();
};


#endif //OOP_LINKEDLIST_H
