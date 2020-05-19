//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_DEVIDE_H
#define OOP_DEVIDE_H

#include "BinaryExpression.h"

class Divide : public BinaryExpression {
public:
    Divide(Expression* new_left, Expression* new_right) : BinaryExpression(new_left, new_right) {}
    virtual double calculate() {
        return left->calculate() / right->calculate();
    }
};

#endif //OOP_DEVIDE_H
