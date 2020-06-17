#include <iostream>
#include "BinaryTree.h"
#include "Person.h"

int main() {
    Person amir("amir", 19);
    Person dov("Dov", 40);
    BinaryTree<Person> myTree(amir);
    
    myTree.insert(dov);

    cout << myTree << endl;
}
