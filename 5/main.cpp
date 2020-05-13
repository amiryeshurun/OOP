//
// Created by Amir Yeshurun on 2020-05-05.
//

/*
   Create a String class, supporting:
 * CTORs:
   - a CTOR to create a new string from a given sequence of chars. - V
   - a CTOR to create a new string from a given string (copy CTOR) - be careful from code duplication
     (hint: assignment operator) -V
 * Operators:
    =  - an operator that will be used in order to copy an existing string to the current string. - V
   []  - access to the string's elements. If the user tries to use this elements with an invalid index,
         then throw an "IndexOutOfBounds Exception". - V
    +  - an operator that will be used to concat two strings. - V
    -  - an operator that will be used in order to remove a given suffix from a string. - V
    += - an operator that will be used to concat to the current string.
    -= - an operator that will be used to remove a given suffix from the current string.
  * Methods:
    For each operator, create a method with the same functionality.
 */


#include <iostream>
#include "String.h"
#include <ostream>

std::ostream& operator<<(std::ostream& out, const String& str){
    out << str.data;
    return out;
}

int test_main() {
    String s = "Amir";
    String s2 = "Yeshurun";
    String result = String("Hello").append(" ").append(s) + " " + s2;
    result += "!";
    std::cout << result << std::endl;
    result -= "n!";
    std::cout << result << std::endl;
    return 0;
}