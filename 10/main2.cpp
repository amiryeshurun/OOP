#include <iostream>
#include "Person.h"

using namespace std;

// int max(int x1, int x2) {
//     //return x1 < x2 ? x2 : x1;
//     if(x1 > x2)
//         return x1;
//     else
//         return x2;
// }

// const Person& max(const Person& p1, const Person& p2) {
//     if(p1 > p2) 
//         return p1;
//     else
//         return p2;
// }

template<class T>
const T& Max(const T& t1, const T& t2) {
    if(t1 > t2) 
        return t1;
    else
        return t2;
}

int main_2a() {
    Person amir("amir", 10);
    Person yoav("Yoav", 40);
    
    cout << Max<Person>(amir, yoav).getName() << endl; 
}