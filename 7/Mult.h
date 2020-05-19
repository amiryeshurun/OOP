//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_MULT_H
#define OOP_MULT_H

#include "BinaryExpression.h"

class Mult : public BinaryExpression {
public:
    Mult(Expression* new_left, Expression* new_right) : BinaryExpression(new_left, new_right) {}
    virtual double calculate() {
        return left->calculate() * right->calculate();
    }
};

#endif //OOP_MULT_H
