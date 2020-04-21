//
// Created by Amir Yeshurun on 2020-04-21.
//

#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), size(0) {}

const Node* LinkedList::getHead() const {
    return head;
}

void LinkedList::insert(int data, Node *ptr) {
    if(!ptr) {
        Node* newNode = new Node(data);
        newNode->setNext(head);
        if(head)
            head->setPrev(newNode);
        newNode->setPrev(nullptr); // לא חייב, מכיוון שהCTOR דואג לכך
        head = newNode;
        ++size;
        return;
    }
    Node* newNode = new Node(data);
    newNode->setPrev(ptr);
    if(ptr->getNext())
        ptr->getNext()->setPrev(newNode);
    newNode->setNext(ptr->getNext());
    ptr->setNext(newNode);
    ++size;
}

int LinkedList::getSize() const {
    return size;
}

LinkedList::~LinkedList() {
    cout << "deleting the list: " << endl;
    delete head;
}
