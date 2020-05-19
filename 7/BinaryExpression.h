//
// Created by Amir Yeshurun on 2020-05-19.
//

#ifndef OOP_BINARYEXPRESSION_H
#define OOP_BINARYEXPRESSION_H

#include "Expression.h"

class BinaryExpression : public Expression{
protected:
    Expression* left;
    Expression* right;
public:
    BinaryExpression() {}
    BinaryExpression(Expression* new_left, Expression* new_right) : left(new_left), right(new_right) {}
};

#endif //OOP_BINARYEXPRESSION_H
