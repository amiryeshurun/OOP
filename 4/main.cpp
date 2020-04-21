//
// Created by Amir Yeshurun on 2020-04-21.
//

#include "Node.h"
#include "LinkedList.h"

/*
  Create a linked list (with prev and next), supporting:
    * GetHead - returns a pointer to the head of the list.
    * Size - returns the number of elements in the list.
    * Two versions of insert function - One receives only the data to insert (and inserts the element as the head of the list).
    * The other one will also receive a pointer - and insert the new element AFTER the given pointer.
    * Remove function - receives a pointer and deletes it from the list.
    * DTOR - when destroying the list, all of the elements should be deleted as well.
 */


int main() {
    {
        LinkedList lst;
        for (int i = 0; i < 10; i++)
            lst.insert(i);
        cout << "The size of the list is: " << lst.getSize() << endl;
    }
    cout << "Done, exiting..." << endl;
    return 0;
}