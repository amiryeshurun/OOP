#include "Node.h"

template <class T>
class BinaryTree{
private:
    Node<T>* head;
    int size;
public:
    BinaryTree() : head(nullptr), size(0) {}
    BinaryTree(const T& val) : size(1) {
        head = new Node<T>(val);
    }

    void setHead(const T& val) {
        if(!head) {
            head = new T(val);
            size = 1;
        }
    }

    BinaryTree& insert(const T& val) {
        head->insert(new Node<T>(val));
        size++;
        return *this;
    }

    const Node<T>* getHead() const { return head; }

    void infix(ostream& out) const {
        if(head)
            head->infix(out);
    }
};

template <class T>
ostream& operator<<(ostream& out, BinaryTree<T> tree) {
    tree.infix(out);
    return out;
}