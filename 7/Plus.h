//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_PLUS_H
#define OOP_PLUS_H

#include "BinaryExpression.h"

class Plus : public BinaryExpression {
public:
    Plus(Expression* new_left, Expression* new_right) : BinaryExpression(new_left, new_right) {}
    virtual double calculate() {
        return left->calculate() + right->calculate();
    }
};

#endif //OOP_PLUS_H
