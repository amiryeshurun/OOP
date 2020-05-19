//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_MINUS_H
#define OOP_MINUS_H

#include "BinaryExpression.h"

class Minus : public BinaryExpression {
public:
    Minus(Expression* new_left, Expression* new_right) : BinaryExpression(new_left, new_right) {}
    virtual double calculate() {
        return left->calculate() - right->calculate();
    }
};

#endif //OOP_MINUS_H
