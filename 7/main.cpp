//
// Created by Amir Yeshurun on 2020-05-19.
//

#include <iostream>
#include "Plus.h"
#include "Number.h"
#include "Minus.h"
#include "Mult.h"
#include "Divide.h"

using namespace std;

/*
 * Answer to the question from last week
 */

void printHello(){
    cout << "Hello";
}

void new_endl(ostream& out) {
    out << '\n';
    out.flush();
}

ostream& operator<<(ostream& out, void (*pfunc)(ostream&)) {
    pfunc(out);
    return out;
}

/*
 * End to the answer of the question from last week
 */

int test_main_7() {
    // (3*10)-(90/5)
    cout << "hi" << endl;
    Expression* e = new Minus(new Mult(new Number(3), new Number(10)),
            new Divide(new Number(90), new Number(5)));
    double result = e->calculate();
    cout << result << endl;

    return 0;
}