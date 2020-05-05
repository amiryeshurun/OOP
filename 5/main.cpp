//
// Created by Amir Yeshurun on 2020-05-05.
//

/*
   Create a String class, supporting:
 * Functions and CTORs:
   - a CTOR to create a new string from a given sequence of chars.
   - a CTOR to create a new string from a given string (copy CTOR) - be careful from code duplication
     (hint: assignment operator)
 * Operators:
    =  - an operator that will be used in order to copy an existing string to the current string.
   []  - access to the string's elements. If the user tries to use this elements with an invalid index,
         then throw an "IndexOutOfBounds Exception".
    +  - an operator that will be used to concat two strings.
    -  - an operator that will be used in order to remove a given suffix from a string.
    += - an operator that will be used to concat to the current string.
    -= - an operator that will be used to remove a given suffix from the current string.
  * Methods:
    For each operator, create a method with the same functionality.
 */


#include <iostream>


int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}