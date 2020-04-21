//
// Created by Amir Yeshurun on 2020-04-21.
//

#include "Node.h"

Node::Node() : data(0), next(nullptr), prev(nullptr) {}

Node::Node(int newData) : data(newData), next(nullptr), prev(nullptr) {

}

int Node::getData() const {
    return data;
}

void Node::setData(int data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node *Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node *prev) {
    Node::prev = prev;
}


Node* next;
Node* prev;

Node::~Node() {
    cout << "deleting: " << data << endl;
    if(next) // מקביל לתנאי העצירה של הרקורסיה
        delete next;
}



