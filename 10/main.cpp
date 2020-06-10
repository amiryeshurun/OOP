#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

ostream& operator<<(ostream& out, const Person& p) {
    p.printTxt(out);
    return out;
}

int main_10a() {
    Person amir("amir", 19);
    ofstream out;

    out.open("text.txt", ios::out);

    out << amir;
    out.close();
    return 0;
}