#include <iostream>
#include <list>
#include "Stream.h"

using namespace std;

/*
 * Create a class, called stream. The class should have the following attributes:
 * A Constructor, accepting a linked list of an unknown type.
 * A map function, accepting a mapper function from the type T to a new, unknown type, K. The return value should be a stream of the new type, after applying the mapper function on all of the stream's objects.
 * A removeIf cuntion, accepting a precidate and removing all of the matching objects.
 * forEach function, accepting a function and applying it to all of the objects in the stream.
*/

class IntPrinter{
public:
    IntPrinter() { }
    void operator()(int value) {
        cout << value << " ";
    }
};

template <class Function>
void myFuntion(Function func, list<int> lst) {
    list<int>::iterator it = lst.begin();
    for(; it != lst.end(); it++) {
        func(*it); // Function has () opeator, accepting an int
    }
}

class IntToStringMapper{
public:
    string operator()(int value) {
        return "amir" + to_string(value); 
    }
};

class StringPrinter {
public:
    void operator()(const string& str) {
        cout << str << " ";
    }
};

class AddShalom{
public:
    string operator()(const string& str) {
        return str + "shalom";
    }
};

class Matcher{
public:
    bool operator()(const string& str) {
        return str == "amir2shalom" || str == "amir3shalom";
    }
};

int main() {
    list<int> lst = {1,2,3};
    Stream<int>(lst)
    .map<string>(IntToStringMapper())
    .map<string>(AddShalom())
    .removeIf(Matcher())
    .forEach(StringPrinter());

    return 0;
}

// amir1shalom amir3shalom